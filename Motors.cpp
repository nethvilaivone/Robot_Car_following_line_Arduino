#include "Motor.h"

// Define motors
AF_DCMotor motor1(1);  // Motor connected to M1
AF_DCMotor motor2(2);  // Motor connected to M2
AF_DCMotor motor3(3);  // Motor connected to M3
AF_DCMotor motor4(4);  // Motor connected to M4

// Function implementations
void motorSetup() {

  motor1.setSpeed(0);
  motor2.setSpeed(0);
  motor3.setSpeed(0);
  motor4.setSpeed(0);
  motorStopAll();
}

void motorStopAll() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void motor(int num, int speedM) {
  if (speedM > 0) {
    if (num == 1) motor1.setSpeed(speedM), motor1.run(FORWARD);
    else if (num == 2) motor2.setSpeed(speedM), motor2.run(BACKWARD);
    else if (num == 3) motor3.setSpeed(speedM), motor3.run(BACKWARD);
    else if (num == 4) motor4.setSpeed(speedM), motor4.run(BACKWARD);
  } else if (speedM < 0) {
    speedM = -speedM;
    if (num == 1) motor1.setSpeed(speedM), motor1.run(BACKWARD);
    else if (num == 2) motor2.setSpeed(speedM), motor2.run(FORWARD);
    else if (num == 3) motor3.setSpeed(speedM), motor3.run(FORWARD);
    else if (num == 4) motor4.setSpeed(speedM), motor4.run(FORWARD);
  } else {
    if (num == 1) motor1.run(RELEASE);
    else if (num == 2) motor2.run(RELEASE);
    else if (num == 3) motor3.run(RELEASE);
    else if (num == 4) motor4.run(RELEASE);
  }
}

void MotorSetSpeedAll(int motorOne, int motorTwo, int motorThree, int motorFour) {
    // Motor 1
    if (motorOne > 0) {
        motor1.setSpeed(motorOne);
        motor1.run(FORWARD);
    } else if (motorOne < 0) {
        motor1.setSpeed(-motorOne); // Convert to positive for speed
        motor1.run(BACKWARD);
    } else {
        motor1.run(RELEASE); // Stop motor
    }

    // Motor 2
    if (motorTwo > 0) {
        motor2.setSpeed(motorTwo);
        motor2.run(FORWARD);
    } else if (motorTwo < 0) {
        motor2.setSpeed(-motorTwo);
        motor2.run(BACKWARD);
    } else {
        motor2.run(RELEASE);
    }

    // Motor 3
    if (motorThree > 0) {
        motor3.setSpeed(motorThree);
        motor3.run(FORWARD);
    } else if (motorThree < 0) {
        motor3.setSpeed(-motorThree);
        motor3.run(BACKWARD);
    } else {
        motor3.run(RELEASE);
    }

    // Motor 4
    if (motorFour > 0) {
        motor4.setSpeed(motorFour);
        motor4.run(FORWARD);
    } else if (motorFour < 0) {
        motor4.setSpeed(-motorFour);
        motor4.run(BACKWARD);
    } else {
        motor4.run(RELEASE);
    }
}

// Directional functions
void forward(int speedM) {
  motor(1, speedM);
  motor(2, speedM);
  motor(3, speedM);
  motor(4, speedM);
}

void backward(int speedM) {
  motor(1, -speedM);
  motor(2, -speedM);
  motor(3, -speedM);
  motor(4, -speedM);
}

void turnLeft(int speedM) {
  motor(1, 0);
  motor(2, 0);
  motor(3, speedM);
  motor(4, speedM);
}

void turnRight(int speedM) {
  motor(1, speedM);
  motor(2, speedM);
  motor(3, 0);
  motor(4, 0);
}

void spinLeft(int speedM) {
  motor(1, -speedM);
  motor(2, -speedM);
  motor(3, speedM);
  motor(4, speedM);
}

void spinRight(int speedM) {
  motor(1, speedM);
  motor(2, speedM);
  motor(3, -speedM);
  motor(4, -speedM);
}

void slideRight(int speedM) {
  motor(1, speedM);
  motor(2, -speedM);
  motor(3, -speedM);
  motor(4, speedM);
}

void slideLeft(int speedM) {
  motor(1, -speedM);
  motor(2, speedM);
  motor(3, speedM);
  motor(4, -speedM);
}



// void MotorSetSpeedAll(int motorOne, int motorTow, int motorThree, int motorFour, int direction) {
//     if (direction == FORWARD) {
//         motor1.setSpeed(motorOne);
//         motor1.run(FORWARD);

//         motor2.setSpeed(motorTow);
//         motor2.run(BACKWARD);

//         motor3.setSpeed(motorThree);
//         motor3.run(BACKWARD);

//         motor4.setSpeed(motorFour);
//         motor4.run(BACKWARD);
//     } else if (direction == BACKWARD) {
//         motor1.setSpeed(motorOne);
//         motor1.run(BACKWARD);

//         motor2.setSpeed(motorTow);
//         motor2.run(FORWARD);

//         motor3.setSpeed(motorThree);
//         motor3.run(FORWARD);

//         motor4.setSpeed(motorFour);
//         motor4.run(FORWARD);
//     } else {
//         // Stop all motors
//         motor1.run(RELEASE);
//         motor2.run(RELEASE);
//         motor3.run(RELEASE);
//         motor4.run(RELEASE);
//     }
// }
