//==========================================================================================
//
// Project:  socket10_client
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
// 1.9   14/01/19   
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include "socket10_MyLib.h"
#include <stdlib.h>   // exit
#include <stdio.h>    // printf
#include <signal.h>   // signal, costanti

//------------------------------------------------------------------------------------------
//=== Local variables ======================================================================
//------------------------------------------------------------------------------------------
int sockId;

//------------------------------------------------------------------------------------------
//=== Local function prototypes ============================================================
//------------------------------------------------------------------------------------------
void handler_signal(int signum) 
{
  if (signum == SIGINT) {
    printf("[handler] Ricevuto il segnale SIGINT (CTRL-C)\n"); 
    printf("[handler] Chiusura del socket id=%d\n",sockId); 
    ChiudiSocket(sockId);  //Chiudo il socket.
    exit(ERR_SIGINT);      //Termino il programma con il codice di errore ERR_SIGINT 
  } 
}

int TestSocketToggleClient() {
	
  //Creo il socket e mi connetto al server 
  printf("Creo il socket e mi connetto al server\n");
  sockId=CreaSocketClient("10.10.0.100", 1234);
  
  //Inviamo il comando toggle al server
  printf("Inviamo il comando toggle al server\n");
  InviaComandoToggle(sockId);

  //Chiudo il socket.
  printf("Chiudo il socket.\n");
  ChiudiSocket(sockId);
}

//------------------------------------------------------------------------------------------
//=== Main =================================================================================
//------------------------------------------------------------------------------------------
int main(int argc,char* argv[]) {
	
  signal(SIGINT, handler_signal);     // Interrupt (ANSI)

  TestSocketToggleClient();
  
  return 0;
}

