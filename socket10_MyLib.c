//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include <stdlib.h>        // exit
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>    // sockaddr_in
#include <netdb.h>         // gethostbyname 
#include <fcntl.h>
#include <arpa/inet.h>     // inet_addr
#include <unistd.h>        // read, write, close
#include <stdlib.h>        // exit
#include <stdio.h>         // printf
#include <string.h>        // strlen
#include <errno.h>         // errno
#include "lib_led.h"       // gpio led function
#include "lib_file.h"      // file function
#include "lib_uart.h"      // uart function
#include "socket10_MyLib.h"

//------------------------------------------------------------------------------------------
//=== Global Functions =====================================================================
//------------------------------------------------------------------------------------------
int CreaSocketServer(short Porta) {
	
  int sockId, errore;

  //1. Creazione socket
  sockId=socket(AF_INET, SOCK_STREAM, 0);

  //2. Bind del socket
  //Tipo di indirizzo per il server
  struct sockaddr_in mySocketAddr;
  mySocketAddr.sin_family=AF_INET;
  mySocketAddr.sin_port=htons(Porta);
  mySocketAddr.sin_addr.s_addr=htonl(INADDR_ANY);
	memset(mySocketAddr.sin_zero, 0, 8); //Imposta a zero 8 char di .sin_zero	
  //Il socket deve essere non bloccante
  //errore=fcntl(sockId, F_SETFL, O_NONBLOCK);
  //
  //Configurazione del socket.
  //SO_REUSEADDR->previene l'errore "Address already in use"
  int opt_on = 1;
  errore=setsockopt(sockId, SOL_SOCKET, SO_REUSEADDR, &opt_on, sizeof(opt_on));
  //TODO:gestire l'errore
  errore=bind(sockId, (struct sockaddr*)&mySocketAddr, sizeof(mySocketAddr));
  //TODO:gestire l'errore
  
  //3. - facciamo accettare fino a 7 richieste di servizio
  //contemporanee (che finiranno nella coda delle connessioni).
  errore=listen(sockId, MAXPENDING);
  //TODO: gestire l'errore
  
  return sockId;
}
//------------------------------------------------------------------------------------------
int CreaSocketClient(char* SrvIp, int SrvPort) {
	
  int sockId, errore;
  
  //1. Creazione socket. 
  sockId=socket(AF_INET, SOCK_STREAM, 0);
  
  //2. Connessione del socket
  //Tipo di indirizzo per il server
  struct sockaddr_in sockSrvAddr; 
  sockSrvAddr.sin_family=AF_INET;
  sockSrvAddr.sin_port=htons(SrvPort);
  sockSrvAddr.sin_addr.s_addr=inet_addr(SrvIp);
  //TODO: usare gethostbyname(SrvIp);
  memset(sockSrvAddr.sin_zero, 0, 8);
  errore=connect(sockId, (struct sockaddr*) &sockSrvAddr, sizeof(sockSrvAddr));
  //TODO: Esaminare errore per compiere azioni opportune.
  
  return sockId;
}
//------------------------------------------------------------------------------------------
void ChiudiSocket(int sockId) {
	
  int status = close(sockId);
  if(status<0) perror("Errore nella chiusura del socket");
  return;
}
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
int SpedisciMessaggio(int sockId, char* messaggio) {
	
  printf("SEND LOCAL>%s\n", messaggio);
  //Si puo' notare il semplice utilizzo di write: 
  //write(socket, messaggio, lunghezza messaggio)
  if (write(sockId, messaggio, strlen(messaggio))<0)
  {
    perror("Impossibile mandare il messaggio.\n");
    return -1;
  }   
  printf("Messaggio spedito con successo.\n");
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LeggiMessaggio(int sockId, char *buffer) {
	
  int readByte;

  //Lettura dei dati dal socket (messaggio ricevuto)
  if ((readByte=read(sockId,buffer,sizeof(buffer)-1))<0)   {
    perror("Impossibile leggere il messaggio.\n");
    return -1;
  } else if (readByte==0) {
    return -1;
  } else {
    //Aggiusto la lunghezza...
    buffer[readByte]=0;
    //Stampo dati ricevuti
    printf("%s",buffer);
  }
  
  return 0;
}
//------------------------------------------------------------------------------------------
void TestServerWeb(int sockId) {
	
  //https://stackoverflow.com/questions/25047905/http-request-minimum-size-in-bytes
  int exitCond=0;
  char msg[1512];

  // Spedisco il messaggio 
  printf("Spedisco il messaggio ...\n");
  SpedisciMessaggio(sockId, "GET / HTTP/1.0\n\r\n\r");
  printf("Fine invio ...\n");
  
  printf("Lettura dal server ..........\n");
  while (!exitCond)
  {
    //Lettura il messaggio dal server
    LeggiMessaggio(sockId, msg);
    if (strcmp(msg,"exit\r\n")==0) exitCond=1;
  }    
  printf("Fine lettura dal server ..........\n");

}
//------------------------------------------------------------------------------------------
void StampaBuffer(char *buff, int len) {
	
  for(int i=0; i<len; i++) {
    printf("buffer[%d]=%d ",i,buff[i]);
  }
  printf("\n");
}
//------------------------------------------------------------------------------------------
int RiceviHttpCommmand(int sockId) {
	
  int readByte;
  char buffer[1024];

  //Lettura dei dati dal socket (messaggio ricevuto)
  readByte=read(sockId, buffer, sizeof(buffer)-1);
  if(readByte<=0) { return -1; }
  buffer[readByte]='\0';  //Aggiusto la lunghezza...
  printf("---------------------------------------------\n");
  printf("Richiesta HTTP ricevuta dal client:\n%s\n",buffer);
  printf("---------------------------------------------\n");

  //Invio risposta al client
  char answer[1024];
  strcpy(answer,"HTTP/1.1 200 OK\r\n");
  strcat(answer,"Connection: close\r\n");
  strcat(answer,"Content-Type: text/plain\r\n");
  strcat(answer,"\r\n");
                                       
  //Estraggo alcune informazioni dalla richiesta del client
  char *requestPage, *requestPageEnd;
  requestPage = strstr(buffer, "GET ")+4;
  requestPageEnd = strstr(buffer, "HTTP/1.1");
  requestPageEnd[-1]='\0';
  printf("RequestPage:%s\n",requestPage);
  //Eseguo il comando ricevuto
  char *cmdLedToggle="/LedToggle";
  char *cmdLedOn="/LedOn";
  char *cmdLedOff="/LedOff"; 
  char *cmdLedBlink="/LedBlink"; 
  if(!strcmp(requestPage,cmdLedOn)) {
    printf("Eseguo il comando cmdLedOn\n ");
    strcat(answer,"Ok, acccendo la luce.\r\n");
    LedOn();
  } else if(!strcmp(requestPage,cmdLedOff)) {
    printf("Eseguo il comando cmdLedOff\n ");
    strcat(answer,"Ok, spengo la luce.\r\n");
    LedOff();
  } else if(!strcmp(requestPage,cmdLedToggle)) {
    printf("Eseguo il comando cmdLedToggle\n ");
    strcat(answer,"Ok, eseguo il comando cmdLedToggle.\r\n");
    LedToggle();
  } else if(!strcmp(requestPage,cmdLedBlink)) {
    printf("Eseguo il comando cmdLedBlink\n ");
    strcat(answer,"Ok. Adesso la luce lampeggerà un po'.\r\n");
    LedBlink(4,1);
  } else {
    printf("Mi dispiace, non ho capito.\n ");
    strcat(answer,"Mi dispiace, non ho capito.\r\n");
  }
  write(sockId, answer, strlen(answer));
  printf("---------------------------------------------\n");
  printf("Invio risposta al client:\n%s\n",answer);
  
  return 0;
}
//------------------------------------------------------------------------------------------
int RiceviComandoToggle(int sockId) {
	
  int readByte;
  char buffer[1024], *toggle_cmd = "led_toggle\r\n";;

  //Lettura dei dati dal socket (messaggio ricevuto)
  readByte=read(sockId, buffer, sizeof(buffer)-1);
  if(readByte<=0) { return -1; }
  buffer[readByte]='\0';  //Aggiusto la lunghezza...
  //[DEBUG] Stampo dati ricevuti
  //StampaBuffer(buffer, readByte);
  printf("Ricevuto dal client il comando: %s\n",buffer);

  //Eseguo il comando ricevuto
  if(!strcmp(buffer,toggle_cmd)) {
    printf("Eseguo il comando toggle del led\n ");
    LedToggle();
  }
  
  return 0;
}
//------------------------------------------------------------------------------------------
int RiceviHttpRequest(int sockId) {
	
  //Adattare il precedente RiceviHttpCommmand(int sockId)
}
//------------------------------------------------------------------------------------------
int InviaComandoToggle(int sockId) {
	
  char cmd[]="led_toggle\r\n";
  write(sockId, cmd, strlen(cmd));

  return 0;
}
