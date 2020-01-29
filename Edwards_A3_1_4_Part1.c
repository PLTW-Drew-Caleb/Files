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
  Date: 1/16/2020
  Section: Part 1: A Flashlight Responding to Light


  Task Description:


  Pseudocode:
start
	Declarations
		num LIGHTTHRESH = 700
		num FLASHVAL = 127
	while 1 is 1
		if lightSensor > LIGHTTHRESH
			turn on flashlight
		endif
		if lightSensor <= LIGHTTHRESH
			turn off flashlight
		endif
	endwhile
stop
*/

task main()
{                                     //Program begins, insert code within curly braces
	int LIGHTTHRESH = 700;
	int FLASHVAL = 127;
	while (1 == 1)  {
		if (SensorValue(lightSensor) > LIGHTTHRESH)  {
			turnFlashlightOn(flashlight, FLASHVAL);
		}
		else /*(SensorValue(lightSensor) <= LIGHTTHRESH)*/  {
			turnFlashlightOff(flashlight);
		}
	}
}