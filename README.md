# Arduino-True-DAC
This library implements a true 12-bit DAC on Arduino pins 2 - 13 with R-2R resistor ladder.
10-bit and 8-bit options also available.

The Digital-Analog Converter (DAC) is formed on pins 2 - 13 with the R-2R ladder which is connected as shown in the diagram.
The output voltage changes from 0 to 5 V corresponding to the DAC input setting ranged from 0 to 4095 (integer).

![circuit diagram image](/diagram12bit.JPG)

## How to use

1. Simply download this library folder into your Arduino user libraries folder which is by default located in your Arduino workspace (on Windows 7 its at `C:\Users\%Username%\Documents\Arduino\libraries\`)
2. Add `#include "ArduinoTrueDAC.h"` directive to your sketch file
3. Initialize DAC under the `void setup()` with `DAC12INIT` function
4. Use `DAC12OUT` function for analog output

See examples for reference.

Note that the execution of `DAC12OUT` approximately takes 17 microseconds on Arduino UNO R3, Atmega328P.

One can use 1 kOhm resistor for R and 2 kOhm resistor for 2R. The author used 1 kOhm and 2 kOhm metal film resistors with 1% accuracy.

For better stability output signal filtering is recommended with an RC integrator comprised of 1 kOhm resistor and 100 nF ceramic capacitor which gives integrator specific time of 100 microseconds.

## Example - Sinewave
![sinewave oscilloscope screenshot image](/scope_output_voltage.png)
