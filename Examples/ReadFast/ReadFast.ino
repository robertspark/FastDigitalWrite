#include <digitalWriteFast.h>
#define pinNum 9
//int pinNum = 9; //do not use variables, macro will revert to the slower pinMode()
//const int pinNum = 9; //this is a constant, will use port manipulation (fast)

void setup() {
  pinModeFast(pinNum, INPUT);
}

void loop() {
  digitalReadFast(pinNum);
}
