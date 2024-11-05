#include <Arduino.h>

void setup() {
 // Set the LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);

  // Wait for 1000 milliseconds (1 second)
  delay(1000);

 // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);

  // Wait for 1000 milliseconds (1 second)
  delay(1000);
}