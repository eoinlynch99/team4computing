task main()
{
	float batteryLife = getBatteryVoltage();

	displayBigTextLine(1, "%f",batteryLife);

	wait1Msec(5000);

	// motor speed

	int currentspeed;

	setMotorSpeed(motorB, 50);
	setMotorSpeed(motorC, 50);

	currentspeed = getMotorSpeed(motorB);

	sleep(3000);

	displayBigTextLine(5, "%d",currentspeed);

	wait1Msec(5000);
}
