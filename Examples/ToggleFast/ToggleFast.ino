#include <digitalWriteFast.h>
#define pinNum 9
void setup() {
  pinModeFast(pinNum, OUTPUT);
}

void loop() {
//the pin is toggled multiple time before looping is because it took too long that the pin stayed low for 600ns, while clearing or setting the pin only took 125ns. For 16MHz Arduino Uno.
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
  digitalWriteFast(pinNum, HIGH);
  digitalWriteFast(pinNum, LOW);
}