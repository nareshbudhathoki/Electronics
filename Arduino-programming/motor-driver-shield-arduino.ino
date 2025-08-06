#include <AFMotor.h>

// Create motor objects
AF_DCMotor leftMotor(2);   // M2
AF_DCMotor rightMotor(1);  // M1
AF_DCMotor leftBack(3); //M3
AF_DCMotor rightBack(4); //M4


// Movement settings
const int motorSpeed = 250;       // Speed (0–255)
const int forward_move = 2000;    // forward duration (ms)
const int turnTime = 300;         // Time to turn 180 degrees

void setup() {
  Serial.begin(9600);
  
  // Set initial speed
  leftMotor.setSpeed(motorSpeed);
  rightMotor.setSpeed(motorSpeed);
  leftBack.setSpeed(motorSpeed);
  rightBack.setSpeed(motorSpeed);
}

// Movement Functions

void forward() {
  leftMotor.run(FORWARD);
  rightMotor.run(FORWARD);
  leftBack.run(FORWARD);
  rightBack.run(FORWARD);
}

void stopMotors() {
  leftMotor.run(RELEASE);
  rightMotor.run(RELEASE);
  leftBack.run(RELEASE);
  rightBack.run(RELEASE);
}

void turnRight() {
  leftMotor.run(FORWARD);
  leftBack.run(FORWARD);
  rightMotor.run(BACKWARD);
  rightBack.run(BACKWARD);
}

void loop() {
  // First long side
  forward();
  delay(forward_move);
  stopMotors();
  delay(500);

  // Turn 
  turnRight();
  delay(turnTime);
  stopMotors();
  delay(500);


  // Second long side
  forward();
  delay(forward_move);
  stopMotors();
  delay(500);

  // Turn 180°
  turnRight();
  delay(turnTime);
  stopMotors();
  delay(500);
}
