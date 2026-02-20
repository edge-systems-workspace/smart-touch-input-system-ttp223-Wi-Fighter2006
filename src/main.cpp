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

    // STEP 3: Configure touch sensor pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // STEP 3: Print initialization message
    Serial.println("=== TTP223 Touch Detection System Initialized ===");
}

void loop() {
}