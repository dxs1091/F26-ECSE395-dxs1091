#include <Arduino.h>

// dxs1091: Pin definitions
const int PHOTORESISTOR_PIN = A0; // analog input from the light sensor
const int RED_PIN = 13; // digital output to red LED
const int BLUE_PIN = 12; // digital output to blue LED
const int GREEN_PIN = 27; // digital output to green LED

const int BRIGHT_THRESHOLD = 220;   // below this reading means bright
const int DARK_THRESHOLD   = 700;   // above this reading  means dark 

void setup() {
  Serial.begin(115200);

  // dxs1091: Set the three traffic light pins as outputs
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

  // dxs1091: Good practice to have pinMode() even if not needed for analogRead()
  pinMode(PHOTORESISTOR_PIN, INPUT);
}

void loop() {
  // dxs1091: Read the current light level from the photoresistor (0-4095)
  int lightLevel = analogRead(PHOTORESISTOR_PIN);

  // dxs1091: Print the reading to the Serial Monitor so we can watch it live and test/tune
  Serial.print("Light level: ");
  Serial.println(lightLevel);

  // dxs1091: Turn all three LEDs off before deciding which one to light up
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);

  // dxs1091: Decide which LED to activate based on the (inverted) light reading
  if (lightLevel < BRIGHT_THRESHOLD) {
    digitalWrite(GREEN_PIN, HIGH); // low reading = bright light triggers the green LED
  } else if (lightLevel < DARK_THRESHOLD) {
    digitalWrite(BLUE_PIN, HIGH); // mid-range reading = dim light triggers the blue LED
  } else {
    digitalWrite(RED_PIN, HIGH); // high reading = dark triggers the red LED
  }

  delay(200);
}