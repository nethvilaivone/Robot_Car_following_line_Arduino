#ifndef MOTOR_H
#define MOTOR_H

#include <AFMotor.h>

// Declare motors
extern AF_DCMotor motor1;
extern AF_DCMotor motor2;
extern AF_DCMotor motor3;
extern AF_DCMotor motor4;

// Function declarations
void motorSetup();
void MotorSetSpeedAll(int motot1 , int motor2 , int motor3 ,int motor4 );
void motorStopAll();
void motor(int num, int speedM);
void forward(int speedM);
void backward(int speedM);
void turnLeft(int speedM);
void turnRight(int speedM);
void spinLeft(int speedM);
void spinRight(int speedM);
void slideRight(int speedM);
void slideLeft(int speedM);

#endif // MOTOR_H
