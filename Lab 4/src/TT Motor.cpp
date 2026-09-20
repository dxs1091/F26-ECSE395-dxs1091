#include <Arduino.h>

// Pin definitions for B-1A and B-1B
const int MOTOR_B_1A = A1; 
const int MOTOR_B_1B = A0; 


void setup() {

  // Set pins as outputs
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  

  // Reverses initial code to reverse which direction the motor spins
  analogWrite(MOTOR_B_1A, 0); // originally 250
  analogWrite(MOTOR_B_1B, 230); // originally 0

  delay(2000); // shortened delay from 5000 to 2000

  // Turn the motor off after the delay finishes
  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);

}

void loop() {

}