#include <Arduino.h>

void setup() {
pinMode(13, OUTPUT);
}

void loop() {
digitalWrite(13, HIGH);
delay(1500);
digitalWrite(13, LOW);
delay(800);
}
