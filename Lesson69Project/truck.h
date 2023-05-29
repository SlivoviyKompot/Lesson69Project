#pragma once
#include "main.h"

class Truck
{
private:
	int tank;
	int weight;

public:
	Truck() :tank(0), weight(0) {}
	Truck(int tank, int weight) : tank(tank), weight(weight) {}
	~Truck() {}

	int getTank();
	int getWeight();
	void setTank(int tank);
	void setWeight(int weight);
};

