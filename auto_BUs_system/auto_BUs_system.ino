#include "CytronMotorDriver.h"
#include <Servo.h>

// Configure the motor driver
CytronMD motor1(PWM_PWM, 3, 9);    // Normal motor1
CytronMD motor2(PWM_PWM, 11, 10);  // Normal motor2

#define TRIG_PIN 6
#define ECHO_PIN 7
#define SERVO_PIN 2

Servo myServo; 

//////////////////////////////////////////////////////////////////////


// Basic movement functions
void forward() {
  motor1.setSpeed(150);    // Motor 1 runs forward.
  motor2.setSpeed(150);
  delay(1000);
}

void slowDown() {
  motor1.setSpeed(50);    // Motor 1 runs forward.
  motor2.setSpeed(50);
}

void stopRobot() {
  motor1.setSpeed(0);    // Motor 1 runs forward.
  motor2.setSpeed(0);
}
//////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(90); // Center position at start

}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 20) {
    stopRobot();
    // add servo motor from 0 to 180
    Serial.println("Obstacle! Stop");
    delay(1000);
  } else {
    forward();
    Serial.println("Clear. Forward");
  }

  delay(300);
}