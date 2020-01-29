#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: 3.1.2
  Team Members: Drew Edwards
  Date: 1/13/2020
  Section: Part 1: Controlling LEDs


  Task Description:


  Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
	turnLEDOff(green);
	wait(1);
	turnLEDOn(green);
	wait(1);
	turnLEDOff(green);
	wait(1);
	turnLEDOn(green);
	wait(1);
	turnLEDOff(green);
}
