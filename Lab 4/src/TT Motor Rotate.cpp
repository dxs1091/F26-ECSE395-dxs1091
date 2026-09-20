#include <Arduino.h>

// dxs1091: Set pins to A1 and A0
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // dxs1091: Set baud rate to 115200
  Serial.begin(115200);

  // dxs1091: Set motor pins as outputs
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT); 

  Serial.println("Motor starting...");
}

void loop() {
  // Clockwise sequence
  Serial.println("Clockwise...");
  
  // dxs1091: Wrote HIGH to B-1A and LOW to B-1B
  digitalWrite(MOTOR_B_1A, HIGH);
  digitalWrite(MOTOR_B_1B, LOW);

  // dxs1091: Set delay to 5s
  delay(5000);

  // dxs1091: Stops motion
  Serial.println("Stopping...");
  
  // dxs1091: Set all motors to LOW to turn off motors
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  // dxs1091: Set delay to 2s
  delay(2000);

  // Counterclockwise sequence
  Serial.println("Counterclockwise...");
  
  // dxs1091: Writing HIGH to B-1B this time to reverse direction to counterclockwise
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, HIGH);

  // dxs1091: Set delay to 5s
  delay(5000);

  // dxs1091: Stops motion
  Serial.println("Stopping...");
  
  // dxs1091: Set all motors to LOW to turn off motors
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  // dxs1091: Set delay to 2s
  delay(2000);
}