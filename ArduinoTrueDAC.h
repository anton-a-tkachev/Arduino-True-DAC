//----------------------------------------------------------------------
// Arduino True DAC Library
//----------------------------------------------------------------------
// Implements a true DAC functionality on Arduino digital pins

#include "Arduino.h"

#ifndef ARDUINOTRUEDAC_h
#define ARDUINOTRUEDAC_h

void DAC8INIT();
void DAC8OUT(int SETTING);
void DAC10INIT();
void DAC10OUT(int SETTING);
void DAC12INIT();
void DAC12OUT(int SETTING);

#endif
