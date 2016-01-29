#include <digitalWriteFast.h>
#define pinNum 9
void setup() {
  pinModeFast(pinNum, INPUT);
}

void loop() {
  digitalReadFast(pinNum);
}
