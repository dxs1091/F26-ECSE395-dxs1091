```
#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(115200); // Start the Serial connection
  Serial.println("I taught an ESP32 (and myself) to say my name in Morse Code!.");
}

void loop() {

  int dot = 200;        // duration of a "dot" flash
  int dash = 600;        // duration of a "dash" flash
  int gap = 200;         // gap between flashes within the same letter
  int letterGap = 600;   // pause between letters
  int wordGap = 2000;    // longer pause before spelling the name again

  Serial.println("Spelling: DANIEL");

  // D = dash dot dot
  digitalWrite(LED_PIN, HIGH); delay(dash); digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(letterGap);

  // A = dot dash
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dash); digitalWrite(LED_PIN, LOW); delay(letterGap);

  // N = dash dot
  digitalWrite(LED_PIN, HIGH); delay(dash); digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(letterGap);

  // I = dot dot
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(letterGap);

  // E = dot
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(letterGap);

  // L = dot dash dot dot
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dash); digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(gap);
  digitalWrite(LED_PIN, HIGH); delay(dot);  digitalWrite(LED_PIN, LOW); delay(wordGap);

  Serial.println("Done spelling DANIEL. Repeating...");
}
```