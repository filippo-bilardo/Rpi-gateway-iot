//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include <bcm2835.h>  // Accedere ai pin della Raspberry
#include <stdio.h>    //
#include <stdlib.h>   //
#include <unistd.h>   //Sleep
#include "lib_led.h"

//------------------------------------------------------------------------------------------
//=== Global Functions =====================================================================
//------------------------------------------------------------------------------------------
int LedInit() {
	
	if (!bcm2835_init()) {
		fprintf(stderr, "Error! bcm2835_init() fails.\n");
		exit(1);
	}
	
  // Set the pin to be an output
  bcm2835_gpio_fsel(LED0, BCM2835_GPIO_FSEL_OUTP);
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LedToggle() {
	
  if(bcm2835_gpio_lev(LED0)==HIGH) {
    bcm2835_gpio_write(LED0, LOW);
  } else {
    bcm2835_gpio_write(LED0, HIGH);
  }
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LedOn() {
	
  bcm2835_gpio_write(LED0, HIGH);
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LedOff() {
	
  bcm2835_gpio_write(LED0, LOW);
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LedBlink(int nrBlink, int secDelay) {
	
  for(int i=0; i<nrBlink; i++) 
  {
    LedOn();
    sleep(secDelay);
    LedOff();
    sleep(secDelay);
  }
  
  return 0;
}
//------------------------------------------------------------------------------------------
int LedTest() {
	
  LedInit();
  
  for(int i=0; i<4; i++) 
  {
    LedOn();
    sleep(1);
    LedOff();
    sleep(1);
  }

  if (!bcm2835_close()) {
    fprintf(stderr, "Error! bcm2835_close() fails.\n");
    exit(1);
  }
  
  return 0;
}
