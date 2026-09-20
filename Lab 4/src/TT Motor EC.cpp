#include <Arduino.h>

// Pin definitions for the B-1A and B-1B
const int MOTOR_B_1A = A1;   
const int MOTOR_B_1B = A0;   

void setup() {
    Serial.begin(115200);              
    pinMode(MOTOR_B_1A, OUTPUT);     
    pinMode(MOTOR_B_1B, OUTPUT);     

    // Keeping B-1B fixed to LOW
    digitalWrite(MOTOR_B_1B, LOW);

    // Communicating to Serial Monitor
    Serial.println("Ramping speed up/down in one direction...");
}

void loop() {
    // Ramping up
    for (int speed = 0; speed <= 255; speed++) {
        analogWrite(MOTOR_B_1A, speed);  // motor speeds up
        delay(20);                       // small delay
    }

    // Ramping down
    for (int speed = 255; speed >= 0; speed--) {
        analogWrite(MOTOR_B_1A, speed);  // motor slows down
        delay(20);                       // same delay
    }
}