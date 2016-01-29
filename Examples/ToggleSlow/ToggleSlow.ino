#define pinNum 9

void setup() {
  pinMode(pinNum, OUTPUT);
}

void loop() {
//digitalWrite is so slow that , you don't actually need to toggle multiple times in 1 loop
// because digitalWrite takes 6280ns but to return to the start of loop takes  only 600ns.
// this only makes a big deal when using digitalWriteFast(pinNum, state);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
  digitalWrite(pinNum, HIGH);
  digitalWrite(pinNum, LOW);
}
