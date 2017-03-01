#include "ArduinoTrueDAC.h"

void setup() {
  Serial.begin(9600);
  DAC12INIT();  // initialize the DAC
}

void loop() {
  if(Serial.available())
    DAC12OUT(Serial.parseInt());
    
  delay(1);
}
