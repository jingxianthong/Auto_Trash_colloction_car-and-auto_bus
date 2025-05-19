#include <Servo.h>

Servo myServo;  // Create a servo object

int currentAngle = 0;
bool goingUp = true;

void setup() {
  myServo.attach(9);      // Attach the servo to pin 9
  myServo.write(0);       // Start at 0 degrees
}

void loop() {
  if (goingUp) {
    currentAngle = 180;
    goingUp = false;
  } else {
    currentAngle = 0;
    goingUp = true;
  }

  myServo.write(currentAngle);  // Move to target angle

  delay(1000);  // Wait for 1 minute (60000 milliseconds)
}
