//----------------------------------------------------------------------
// Arduino True DAC Library
//----------------------------------------------------------------------
// Implements 12-bit DAC functionality on Arduino pins 2 - 13

#ifndef ARDUINOTRUEDAC_cpp
#define ARDUINOTRUEDAC_cpp

#include "ArduinoTrueDAC.h"

void DAC12INIT(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

// The DAC12OUT function sets DAC output
// Takes SETTING = 0 .. 4095 corresponding to 0 .. 5 V range
// Estimated time of a run is between 15 and 20 microseconds
void DAC12OUT(int SETTING){
  digitalWrite(13, SETTING       & 1);
  digitalWrite(12, SETTING >>  1 & 1);
  digitalWrite(11, SETTING >>  2 & 1);
  digitalWrite(10, SETTING >>  3 & 1);
  digitalWrite( 9, SETTING >>  4 & 1);
  digitalWrite( 8, SETTING >>  5 & 1);
  digitalWrite( 7, SETTING >>  6 & 1);
  digitalWrite( 6, SETTING >>  7 & 1);
  digitalWrite( 5, SETTING >>  8 & 1);
  digitalWrite( 4, SETTING >>  9 & 1);
  digitalWrite( 3, SETTING >> 10 & 1);
  digitalWrite( 2, SETTING >> 11 & 1);
}
#endif
