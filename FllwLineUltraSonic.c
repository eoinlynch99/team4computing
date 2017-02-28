#pragma config(Sensor, S3,     lightSensor,    sensorEV3_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const tSensors lightSensor = (tSensors) S3;
const tSensors ultrasonic = (tSensors) S4;


task main()
{
	nMotorPIDSpeedCtrl[motorC] = mtrSpeedReg;
	nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;
	while(1==1)
	{
		while(SensorValue(lightSensor)< 30)
	  {
	  	motor[motorC]=30;
	  	motor[motorB]=0;
	  }
	  while(SensorValue(lightSensor) >= 30)
	  {
	  	motor[motorC] = 0;
	  	motor[motorB] = 30;
		}
		if(SensorValue(sonarSensor)<25)
		{
			motor[motorC]=0;
	  	motor[motorB]=35;
	  	wait1Msec(1000);

	  	motor[motorC]=50;
	  	motor[motorB]=50;
	  	wait1Msec(1500);

	  	motor[motorC]=35;
	  	motor[motorB]=0;
	  	wait1Msec(1000);

	  	motor[motorC]=50;
	  	motor[motorB]=50;
	  	wait1Msec(1500);

	  	motor[motorC]=35;
	  	motor[motorB]=0;
	  	wait1Msec(1000);


	  	motor[motorC]=50;
	  	motor[motorB]=50;
	  	wait1Msec(1500)




	  }




   }

}
