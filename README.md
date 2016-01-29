# digitalWriteFast
Arduino library for faster `digitalWrite()` using port manipulation and macro for ease in pin assignments. 
Which actually also does faster `pinMode()` and `digitalRead()`.

By using:
* `digitalWriteFast(pinNum)` (sets or clears pin/port faster) 
* `pinModeFast(pinNum)` (sets pin/port as input or output faster)
* `digitalReadFast(pinNum)`(reads the state of pin/port faster) 

`pinNum` is the number written on the Arduino board.

The regular `digitalWrite(pinNum)` in Arduino Uno core takes about 7000nS while direct port manipulation takes 250nS.
> Data from: http://www.billporter.info/2010/08/18/ready-set-oscillate-the-fastest-way-to-change-arduino-pins/

This is a huge difference, especially or timing sensitive applications.

Direct port manipulation is troublesome where one has to refer to the pin assignment of the package and manipulate specific ports, instead of pin numbers on the Arduino board.

This library makes it easier by using `digitalWriteFast(pinNum)` and the macro will replace it will the approritate port manipulation commands.

## Compatibility
* Arduino Due
* Arduino Zero
* Arduino Mega
* Arduino with ATmega644 or Atmega644P chip
* Arduino Leonardo
* Arduino Uno (I have only tested with uno)

If not in the list, the macro will revert back to  `digitalWrite()`, `pinMode()` or `digitalRead()`

## Reference
Fork of Watterott's https://github.com/watterott/Arduino-Libs/tree/master/digitalWriteFast
I just forked the whole repo, and delete unrelated files, I tried sparse checkout and gave up.

Watterott's digitalWriteFast could have used the below links as referrence.
* https://code.google.com/archive/p/digitalwritefast/downloads 
* http://forum.arduino.cc/index.php?topic=46896.0
