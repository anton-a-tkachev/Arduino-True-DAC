//----------------------------------------------------------------------
// Arduino True DAC Library
//----------------------------------------------------------------------
// Implements true DAC functionality on Arduino pins

#ifndef ARDUINOTRUEDAC_cpp
#define ARDUINOTRUEDAC_cpp

#include "ArduinoTrueDAC.h"

// DAC12INIT initializes a 12-bit DAC on pins 2 - 13
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

// DAC12OUT sets 12-bit DAC output voltage
// Takes SETTING = 0 .. 4095 corresponding to 0 .. 5 V output range
// Voltage resolution: 1.221 mV per count
// Approximate execution time is 17 microseconds on Arduino UNO R3, Atmega328P
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

// DAC10INIT initializes a 10-bit DAC on pins 4 - 13
void DAC10INIT(){
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

// DAC10OUT sets 10-bit DAC output voltage
// Takes SETTING = 0 .. 1023 corresponding to 0 .. 5 V output range
// Voltage resolution: 4.887 mV per count
// Execution time is at least under 17 microseconds on Arduino UNO R3, Atmega328P
void DAC10OUT(int SETTING){
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
}

// DAC8INIT initializes a 8-bit DAC on pins 6 - 13
void DAC8INIT(){
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

// DAC8OUT sets 8-bit DAC output voltage
// Takes SETTING = 0 .. 256 corresponding to 0 .. 5 V output range
// Voltage resolution: 19.607 mV per count
// Execution time is at least under 17 microseconds on Arduino UNO R3, Atmega328P
void DAC8OUT(int SETTING){
  digitalWrite(13, SETTING       & 1);
  digitalWrite(12, SETTING >>  1 & 1);
  digitalWrite(11, SETTING >>  2 & 1);
  digitalWrite(10, SETTING >>  3 & 1);
  digitalWrite( 9, SETTING >>  4 & 1);
  digitalWrite( 8, SETTING >>  5 & 1);
  digitalWrite( 7, SETTING >>  6 & 1);
  digitalWrite( 6, SETTING >>  7 & 1);
}
#endif
