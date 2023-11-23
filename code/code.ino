#include <Stepper.h>

// Define stepper motor connections and steps per revolution
const int stepsPerRevolution = 200;
Stepper stepperX(stepsPerRevolution, 8, 9, 10, 11);  // X-axis stepper motor
Stepper stepperY(stepsPerRevolution, 4, 5, 6, 7);    // Y-axis stepper motor

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read commands or G-code from input source (e.g., Serial input)
  // Interpret commands and move the motors accordingly
  // Example: Move 100 steps in the X-axis
  moveX(100);
  delay(1000);  // Delay for stability, adjust as needed
}

void moveX(int steps) {
  // Move the X-axis stepper motor
  stepperX.setSpeed(100);  // Set motor speed (adjust as needed)
  stepperX.step(steps);    // Move the motor by the specified number of steps
}
