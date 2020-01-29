#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
/*
  Project Title: 3.1.3
  Team Members: Drew Edwards
  Date: 1/15/2020
  Section: Part 4: Using the Optical Shaft Encoder


  Task Description:


  Pseudocode:
start
	Declarations
		num MOTORMAX = 127
	leftMotor to MOTORMAX / 2
	rightMotor to MOTORMAX / 2
	wait for encoder >= 480
	stop leftMotor
	stop rightMotor
stop

*/

task main()
{                                     //Program begins, insert code within curly braces
	int MOTORMAX = 127;
	startMotor(leftMotor, MOTORMAX / 2);
	startMotor(rightMotor, MOTORMAX / 2);
	untilEncoderCounts(480, quad);
	stopMotor(leftMotor);
	stopMotor(rightMotor);
}