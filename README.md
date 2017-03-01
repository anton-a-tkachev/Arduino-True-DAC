# Arduino-True-DAC
This library implements a true 12-bit DAC on Arduino pins 2 - 13 with R-2R resistor ladder.
10-bit and 8-bit options also available.

The Digital-Analog Converter (DAC) is formed on pins 2 - 13 with the R-2R ladder which is connected as shown in the diagram.
The output voltage changes from 0 to 5 V corresponding to the DAC input setting ranged from 0 to 4095 (integer).

How to use

1) Simply upload this library folder into your Arduino user libraries folder which is by default located in your Arduino workspace "C:\Users\%Username%\Documents\Arduino\libraries\" in Windows 7

2) Add #include "ArduinoTrueDAC.h" directive to your sketch file

3) Initialize the DAC in the setup-function

4) Use the DAC12OUT for analog output

See the examples for reference.

Note that DAC12OUT function execution approximately takes from 15 to 20 microseconds.

One can use 1 kOhm resistor for R and 2 kOhm resistor for 2R. The author used 1 kOhm and 2 kOhm metal film resistors of 1% accuracy.
