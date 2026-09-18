
#include <ESP32Servo.h>

// Define the servo and the pin it is connected to
Servo myServo;
const int servoPin = A0;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500;  // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50); // Standard 50Hz servo

  Serial.begin(115200);
  randomSeed(analogRead(A5));
}

void loop() {
  // Pick a random angle between 0 and 180 degrees (inclusive)
  int angle = random(0, 181);  // random(min, max) is exclusive of max, so use 181 to include 180

  // Pick a random delay between 200ms and 2000ms so movement speed/pause varies each time
  int randomDelay = random(200, 2001);

  // Convert the random angle to a pulse width using the same mapping as before
  int pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth);

  // Move the servo directly to the new random angle (no gradual sweep -
  // this is what makes the motion "random" rather than linear)
  myServo.writeMicroseconds(pulseWidth);

  // Print the chosen angle and delay to Serial Monitor for observation/debugging
  Serial.print("Moved to angle: ");
  Serial.print(angle);
  Serial.print(" | Waiting: ");
  Serial.print(randomDelay);
  Serial.println(" ms");

  // Hold at this position for the randomly chosen delay before picking a new one
  delay(randomDelay);
}