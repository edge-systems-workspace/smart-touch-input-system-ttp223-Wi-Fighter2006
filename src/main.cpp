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

    // STEP 2: Initialize Serial communication
    Serial.begin(9600);
}

void loop() {
}