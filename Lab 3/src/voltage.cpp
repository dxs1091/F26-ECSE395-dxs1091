/*#include <Arduino.h>

float voltage(float analogvalue);

// dxs1091: Pin assignment 
const int sensorPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // dxs1091: Reading/storing the raw analog value from A1
    int sensorValue = analogRead(sensorPin);

    // dxs1091: Converting the value from above into an actual voltage
    float sensorVoltage = voltage(sensorValue);

    // dxs1091: Printing voltage to Serial Monitor
    Serial.println(sensorVoltage);

    // dxs1091: Increased delay to make output more readible
    delay(100); 
}

// dxs1091: This function calculates output voltage
float voltage(float analogvalue){
    float voltage;
    // dxs1091: Applying the formula (AnalogValue * ReferenceVoltage) / MaxSensorValue
    voltage = (analogvalue * 3.3) / 4095.0;
    return voltage;
}*/