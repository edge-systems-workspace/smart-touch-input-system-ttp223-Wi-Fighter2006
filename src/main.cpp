#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Detects capacitive touch using TTP223 module
 * and prints status messages to the Serial Monitor.
 */

#define TOUCH_PIN 2

int touchState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(TOUCH_PIN, INPUT);

    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}

void loop() {

    // Read digital value
    touchState = digitalRead(TOUCH_PIN);

    // If touch detected (TTP223 outputs HIGH on touch)
    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } 
    else {
        Serial.println("No Touch");
    }

    // Small delay for readability
    delay(300);
}