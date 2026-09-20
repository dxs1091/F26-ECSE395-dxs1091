
#include <ESP32Servo.h>

// Servo pin set to A0
Servo myServo;
const int servoPin = A0;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500;  // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 s

void setup() {
  // Attach the servo to A0
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50);

  Serial.begin(115200);
  randomSeed(analogRead(A5));
}

void loop() {
  // Picks a random angle between 0 and 180 degrees (inclusive)
  int angle = random(0, 181);  // using 181 to include 180

  // Picks a random delay between 200ms and 2000ms so movement speed/pause varies each time
  int randomDelay = random(200, 2001);

  // Converts the random angle to a pulse width using the same mapping as before
  int pulseWidth = map(angle, 0, 180, minPulseWidth, maxPulseWidth);

  // Moves the servo directly to the new random angle
  myServo.writeMicroseconds(pulseWidth);

  // Some messages for the Serial Monitor to verify
  Serial.print("Moved to angle: ");
  Serial.print(angle);
  Serial.print(" | Waiting: ");
  Serial.print(randomDelay);
  Serial.println(" ms");

  // Fulfills the random delay requirement to keep the randomness going
  delay(randomDelay);
}