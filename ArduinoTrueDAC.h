//----------------------------------------------------------------------
// Arduino True DAC Library
//----------------------------------------------------------------------
// Implements 12-bit DAC functionality on Arduino pins 2 - 13
// DAC12INIT - initialized 12-bit true DAC on Arduino
// DAC12OUT - sets DAC output

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
