#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: 3.1.2
  Team Members: Drew Edwards
  Date: 1/14/2020
  Section: Part 4: Controlling a Servomotor


  Task Description:


  Pseudocode:
start
  Declarations
  	num MOTOR_MAX = 127
  servo to -MOTOR_MAX
  wait 2
  servo to 0
  wait 2
  servo to MOTOR_MAX
  wait 2
end
*/

task main()
{                                     //Program begins, insert code within curly braces
	int MOTOR_MAX = 127;
//	setServo(servoMotor, -MOTOR_MAX);
//	wait(2);
//	setServo(servoMotor, 0);
//	wait(2);
//	setServo(servoMotor, MOTOR_MAX);
//	wait(2);
	setServo(servoMotor, -MOTOR_MAX);
	wait(2);
	setServo(servoMotor, -63);
	wait(3);
	setServo(servoMotor, 0);
	wait(2);
	setServo(servoMotor, 63);
	wait(3);
	setServo(servoMotor, MOTOR_MAX);
	wait(2);
}
