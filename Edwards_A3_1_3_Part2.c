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
  Section: Part 2: Using the Bump Switch (2)


  Task Description:


  Pseudocode:

*/

task main()
{                           //Program begins, insert code within curly braces
	int MOTORMAX = 127;
	untilBump(bumpSwitch);
	startMotor(leftMotor, MOTORMAX / 2);
	startMotor(rightMotor, MOTORMAX / 2);
	untilBump(bumpSwitch);
	startMotor(leftMotor, -MOTORMAX / 2);
	startMotor(rightMotor, -MOTORMAX / 2);
	wait(3.5);
	stopMotor(leftMotor);
	stopMotor(rightMotor);
}
