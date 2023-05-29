#pragma once
#include "main.h"

class Bus
{
private:
	int tank;
	int number;
	int seats;

public:
	Bus() :tank(0), number(0), seats(0) {}
	Bus(int tank, int number, int seats) : tank(tank), number(number), seats(seats) {}
	~Bus() {}

	int getTank();
	int getNumber();
	int getSeats();
	void setTank(int tank);
	void setNumber(int number);
	void setSeats(int seats);
};

