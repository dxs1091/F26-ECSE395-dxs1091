/*// Extra Credit
#include <Arduino.h>

// Pin definitions for the two motor driver input pins (B-1A, B-1B)
const int MOTOR_B_1A = A1;   // PWM speed control pin (one direction only)
const int MOTOR_B_1B = A0;   // Held LOW the whole time -> direction stays fixed

void setup() {
  Serial.begin(115200);              // Start serial communication for debugging

  pinMode(MOTOR_B_1A, OUTPUT);     // Set motor pin A as output (PWM-capable)
  pinMode(MOTOR_B_1B, OUTPUT);     // Set motor pin B as output

  digitalWrite(MOTOR_B_1B, LOW);   // Keep this pin LOW permanently -> fixes rotation direction

  Serial.println("Ramping speed up/down in one direction...");
}

void loop() {
  // --- Ramp UP from 0 to 255 ---
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(MOTOR_B_1A, speed);  // Increase duty cycle -> motor speeds up
    delay(20);                       // Small delay controls how fast the ramp happens
  }

  // --- Ramp DOWN from 255 to 0 ---
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(MOTOR_B_1A, speed);  // Decrease duty cycle -> motor slows down
    delay(20);                       // Same step delay for a smooth, symmetric ramp
  }

  // Loop repeats automatically -> continuous speed up/down cycle, single direction
}*/