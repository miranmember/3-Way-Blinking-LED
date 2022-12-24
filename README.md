# 3-Way-Blinking-LED
## Project Description
This Arduino project is designed to control three LEDs connected to the board. The LEDs are connected to pins LED_BUILTIN, 9, and 11, respectively.

The code alternates the state of each LED in a loop, with a delay of interval milliseconds between each iteration. The initial state of the first LED is LOW, the initial state of the second LED is LOW, and the initial state of the third LED is HIGH. Each iteration, the state of the LEDs is updated according to the following conditions:
+ If the first LED is LOW and the second LED is HIGH, set the first LED to LOW, the second LED to LOW, and the third LED to HIGH.
+ If the first LED is HIGH and the third LED is LOW, set the first LED to LOW, the second LED to HIGH, and the third LED to LOW.
+ If the third LED is HIGH and the second LED is LOW, set the first LED to HIGH, the second LED to LOW, and the third LED to LOW.

The state of each LED is then written to the corresponding pin using digitalWrite().

## Hardware Requirements
+ Arduino board
+ 3 LEDs
+ Wires for connecting the LEDs to the board

## Software Requirements
+ Arduino IDE for uploading the code to the board

## Notes
+ Make sure to adjust the value of interval to your desired delay between LED state updates.
+ Make sure the LED pins are correctly connected to the board.
