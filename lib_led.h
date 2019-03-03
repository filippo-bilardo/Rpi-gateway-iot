//==========================================================================================
//
// Project:  lib_led
// Date:     14/01/19
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  GPIO Led function
// 
// -----------
// Installazione della libreria bcm2835
//   https://www.airspayce.com/mikem/bcm2835/
// download
//   wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.58.tar.gz
// installazione
//   tar zxvf bcm2835-1.58.tar.gz
//   cd bcm2835-1.58
//   ./configure
//   make
//   sudo make check
//   sudo make install
// -----------
// compilazione e test
//   gcc -c lib_led.c -l bcm2835 -o led.o
//   gcc led.o lib_led_test.c -o led_test
//   ./led_test
// 
// Ver   Date       Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   14/01/19   Versione iniziale
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Constants ============================================================================
//------------------------------------------------------------------------------------------
#define LED0 RPI_GPIO_P1_07

//------------------------------------------------------------------------------------------
//=== Function prototypes ==================================================================
//------------------------------------------------------------------------------------------
int LedInit(void);
int LedOn(void);
int LedOff(void);
int LedToggle(void);
int LedBlink(int nrBlink, int secDelay);
int LedTest(void);
