#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from a TTP223 capacitive touch sensor
 * connected to TOUCH_PIN and prints touch status to Serial Monitor.
 */

// STEP 1: Define touch sensor digital pin
#define TOUCH_PIN 2

// Variable to store touch state
int touchState = 0;

void setup() {
}

void loop() {
}