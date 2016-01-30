# digitalWriteFast
Arduino library for faster `digitalWrite()` using direct port manipulation and macro for ease in pin assignments. 
Which actually also does faster `pinMode()` and `digitalRead()`.

## Usage
By using:
* `digitalWriteFast(pinNum, state)` (sets or clears pin/port faster) 
* `pinModeFast(pinNum, mode)` (sets pin/port as input or output faster)
* `digitalReadFast(pinNum)`(reads the state of pin/port faster) 

* `pinNum` is the number written on the Arduino board.
* `state` is weather pin is to be set `HIGH` or `LOW`
* `mode` is weather pin is to be set `INPUT` or `OUTPUT`

In order to toggle fast, all the three parameters above must be constant or defined by the macro for ease in changes during compilation.

For example: 
* use '#define pinNum 10' instead of `int pinNum = 10;`
* use 'const int pinNum 10' instead of `int pinNum = 10;`

Setting the parameter as a variable would cause the macro to revert back to the traditional `digitalWrite`, `pinMode` or `digitalRead` and operates more slowly. 

No error or warning will be thrown, but function works properly, without direct port manipualtion (slow). 

## Speed

The regular `digitalWrite()` in Arduino Uno core (16MHz) takes about **6280nS** while `digitalWriteFast()` port manipulation takes **125nS**.
> More info in: [/NOTES/NOTES.md](/NOTES/NOTES.md)

This is a huge difference, especially or timing sensitive applications.

Direct port manipulation is troublesome where one has to refer to the pin assignment of the package and manipulate specific ports, instead of pin numbers on the Arduino board.

This library makes it easier by using `digitalWriteFast()` and the macro will replace it will the approritate port manipulation commands.

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
