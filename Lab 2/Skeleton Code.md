```
#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // Baud rate defined to be 115200
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // Text output defined to display the baud rate
  Serial.println("The baud rate is 115200."); // Print the words to the Serial Monitor
  
  // Delay set to 500 ms for HIGH/LOW
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(500); // Speed in milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(500); // Speed in milliseconds
}
```

- Notes:
	- Please uncomment the necessary lines and fill in the blank to complete the assignment.
	- In `Serial.begin(_____);`
		- `115200` is recommended, but feel free to try it at other baud rates.
		- Baud rate is the speed of data transmission, measuring the number of signal changes per second in communication channel.