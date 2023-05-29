#pragma once
#include "main.h"

class Car
{
private:
	int tank;
	int speed;
	int power;
	int seats;

public:
	Car() :tank(0), speed(0), power(0), seats(0) {}
	Car(int tank, int speed, int power, int seats) : tank(tank), speed(speed), power(power), seats(seats) {}
	~Car() {}

	int getTank();
	int getSpeed();
	int getPower();
	int getSeats();
	void setTank(int tank);
	void setSpeed(int speed);
	void setPower(int power);
	void setSeats(int seats);
};

