#pragma once
#include "bus.h"
#include "car.h"
#include "truck.h"

class GasStation
{
public:
	static int calculateTotalGas(Bus* buses, int busSize,
		Truck* trucks, int truckSize, Car* cars, int carSize);
};

