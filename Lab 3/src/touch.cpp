#include <Arduino.h>

// dxs1091: Defining the built-in LED pin so we light up the ESP32's LED when contact with the touch sensor is detected

#define LED_PIN LED_BUILTIN

// Sticking to A1
const int sensorPin = A1;  

void setup() {
    Serial.begin(115200);

    // Allows us to read HIGH/LOW signals from touch sensor pin
    pinMode(sensorPin, INPUT);

    // dxs1091: Setting the built-in LED pin as an output so we can turn it on/off
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Reading the digital signal from the touch sensor
    int sensorValue = digitalRead(sensorPin);

    if (sensorValue == HIGH) {
        Serial.println("Touch detected!");

        // dxs1091: Turning the built-in LED on when contact is made with the touch sensor
        digitalWrite(LED_PIN, HIGH);
    } else {
        Serial.println("No touch detected...");

        // dxs1091: Turning the built-in LED off when there is no contact with the touch sensor, pretty straightforward
        digitalWrite(LED_PIN, LOW);
    }

    // AGain, making code more readible
    delay(100);
}