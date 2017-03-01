# Arduino-True-DAC
Implements a true 12-bit DAC on Arduino pins 2 - 13 with R-2R resistor ladder

The Digital-Analog Converter (DAC) is constructed with pins 2 - 13 as digital outputs.
The R-2R ladder is connected to the pins as shown in the diagram.
The output voltage changes from 0 to 5 V corresponding to the DAC setting integer variable ranged from 0 to 4095.

How to use:
1) Simply upload this library folder into your Arduino user libraries folder which is by default located in your Arduino workspace "C:\Users\%Username%\Documents\Arduino\libraries\" in Windows 7
2) Add #include "ArduinoTrueDAC.h" directive to your sketch file
3) Initialize the DAC in the setup-function
4) Use the DAC12OUT for analog output

Note that DAC12OUT function execution approximately takes from 15 to 20 microseconds.
