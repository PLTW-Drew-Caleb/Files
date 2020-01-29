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
  Project Title: 3.1.4
  Team Members: Drew Edwards
  Date: 1/17/2020
  Section: Part 3: Blinking LED with Switch


  Task Description:


  Pseudocode:
start
	clear timer T1
	while time of T1 < 20000
		turn on green
		wait 2
		turn off green
		wait 2
	endwhile
stop
*/

task main()
{                                     //Program begins, insert code within curly braces
	clearTimer(T1);
	while (time1(T1) < 20000)  { //Loop for 20 seconds
		turnLEDOn(green);
		wait(2);
		turnLEDOff(green);
		wait(2);
	}
}
