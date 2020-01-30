
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

task main()
{

	int biggest, close,bright ;
	while (1==1)
	{
	    biggest = 0;
	    close=1000;
	    bright=1000;
	    while (SensorValue(bumpSwitch)==0)
	    {
	        if (SensorValue(potentiometer   )>biggest)
	        {
	        biggest=SensorValue(potentiometer);
	        }
	        if (SensorValue(sonar  )<close)
	        {
	        close=SensorValue(sonar);
	        }
	        if (SensorValue(lightSensor   )<bright)
	        {
	        bright=SensorValue(lightSensor );
	        }
	    }
	}
}
