#define pi 3.1415926535897932384626433832795
#include "ArduinoTrueDAC.h"

int i;              // counter

int SINEWAVE[1000]; // sinewave lookup array

unsigned int f = 1; // sinewave nominal frequency
                    // not the actual frequency
                    // must be a positive integer

void setup() {
  DAC12INIT();  // initialize DAC
  
  // Initialize sinewave lookup array
  for(i = 0; i < 1000; i++)
    SINEWAVE[i] = 2047*sin(2*pi*f*i/1000)+2048;
    
 }

void loop() {
  for(i = 0; i < 1000; i++){
    DAC12OUT(SINEWAVE[i]);
    //delayMicroseconds(10);  // uncomment and modify if needed
  }
}
