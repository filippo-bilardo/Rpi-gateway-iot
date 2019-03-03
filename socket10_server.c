//==========================================================================================
//
// Project:  socket10_server
// Date:     14/01/19
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  Esempio di utilizzo dei Socket.
//
// Ver   Date       Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   23/11/16   Versione iniziale
// 1.8   17/12/18   
// 1.9   14/01/19   TestSocketServer_GetHttpCommand
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include <sys/socket.h>   //inet_aton, sockaddr_in
#include <netinet/in.h>   // inet_aton, sockaddr_in
#include <arpa/inet.h>    // inet_aton, sockaddr_in
#include <stdlib.h>       // exit
#include <stdio.h>        // printf
#include <signal.h>       // signal, costanti
#include "socket10_MyLib.h"
#include "lib_led.h"

//------------------------------------------------------------------------------------------
//=== Local variables ======================================================================
//------------------------------------------------------------------------------------------
int listenSockId;

//------------------------------------------------------------------------------------------
//=== Local function prototypes ============================================================
//------------------------------------------------------------------------------------------
void handler_signal(int signum) {
	
  if (signum == SIGINT) {
    printf("\n[handler] Ricevuto il segnale SIGINT (CTRL-C)\n"); 
    printf("[handler] Chiusura del socket server id=%d\n",listenSockId); 
    ChiudiSocket(listenSockId);  //Chiudo il socket.
    exit(ERR_SIGINT);      //Termino il programma con il codice di errore ERR_SIGINT 
  } 
}
//------------------------------------------------------------------------------------------
int TestSocketToggleServer() {
 
  int newSockId;
  struct sockaddr_in cliAddr;
  socklen_t cliAddrLen = sizeof(cliAddr);
  
  //Creo il socket sul server che ascolta sulla 
  //porta 1234
  listenSockId=CreaSocketServer(1234);
  
  printf("Server: Attendo connessioni...\n");
  for(;;)
  {
    //Aspetta la richiesta dal client 
    //il ciclo while serve per gestire in sequenza altre richieste
    if ((newSockId=accept(listenSockId,(struct sockaddr *)&cliAddr,&cliAddrLen)) != -1)
    {
      printf("Connession con il client: %s:%d\n",inet_ntoa(cliAddr.sin_addr), ntohs(cliAddr.sin_port));
      RiceviComandoToggle(newSockId);
      printf("Chiusura della connessione con il client\n\n");
      ChiudiSocket(newSockId);  //Chiudo il socket.
    }
  }
}
//------------------------------------------------------------------------------------------
int TestSocketServer_GetHttpCommand() {
	
  int newSockId;
  struct sockaddr_in cliAddr;
  socklen_t cliAddrLen = sizeof(cliAddr);
  
  //Creo il socket sul server che ascolta sulla porta 80
  listenSockId=CreaSocketServer(8080);
  
  LedInit();
  
  printf("---------------------------------------------\n");
  printf("Server: Attendo connessioni HTTP...\n");
  printf("---------------------------------------------\n");
  for(;;)
  {
    //Aspetta la richiesta dal client 
    //il ciclo while serve per gestire in sequenza altre richieste
    if ((newSockId=accept(listenSockId,(struct sockaddr *)&cliAddr,&cliAddrLen)) != -1)
    {
      printf("Connession con il client: %s:%d\n",inet_ntoa(cliAddr.sin_addr), ntohs(cliAddr.sin_port));
      RiceviHttpCommmand(newSockId);
      printf("Chiusura della connessione con il client\n\n");
      ChiudiSocket(newSockId);  //Chiudo il socket.
    }
  }
}

//------------------------------------------------------------------------------------------
//=== Main =================================================================================
//------------------------------------------------------------------------------------------
int main(int argc,char* argv[]) {
	
  signal(SIGINT, handler_signal);     // Interrupt (ANSI)

  //TestSocketToggleServer();
  TestSocketServer_GetHttpCommand();
  
  return 0;
}

