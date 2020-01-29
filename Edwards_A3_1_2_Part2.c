#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: 3.1.2
  Team Members: Drew Edwards
  Date: 1/14/2020
  Section: Part 2: Controlling One Motor


  Task Description:


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	int MOTOR_MAX = 127;
	startMotor(rightMotor, -(MOTOR_MAX / 2));
	startMotor(leftMotor, -(MOTOR_MAX / 2));
	wait(5);
	stopMotor(rightMotor);
	stopMotor(leftMotor);
}
