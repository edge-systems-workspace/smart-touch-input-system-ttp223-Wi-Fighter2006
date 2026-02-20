#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Piyush Choudhary
 * @date 2026-02-20
 */

#define TOUCH_PIN 2

int touchState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(TOUCH_PIN, INPUT);

    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}

void loop() {

    // STEP 4: Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);

    Serial.print("Touch State: ");
    Serial.println(touchState);

    delay(200);
}