#include <Arduino.h>

// Your exact pins (ESP8266 NodeMCU)
const int ledPins[] = {D1, D2, D5, D6, D7, D4};
const int numLeds = 6;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  // Forward
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(120);
    digitalWrite(ledPins[i], LOW);
  }

  // Backward
  for (int i = numLeds - 2; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(120);
    digitalWrite(ledPins[i], LOW);
  }
}
