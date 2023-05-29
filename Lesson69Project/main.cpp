#include "gasStation.h"

int main(void) {
	Car car1(50, 200, 1600, 3);
	Car car2(60, 240, 2000, 5);
	Car car3(40, 160, 1200, 4);

	Bus bus1(200, 50, 27);
	Bus bus2(250, 45, 30);

	Truck truck1(300, 20000);
	Truck truck2(350, 25000);

	Car cars[3] = { car1, car2, car3 };
	Bus buses[2] = { bus1, bus2 };
	Truck trucks[2] = { truck1, truck2 };

	int totalFuel = GasStation::calculateTotalGas(buses, 2, trucks, 2, cars, 3);
	int totalSeats = Festival::calculateTotalSeats(buses, 2, cars, 3);

	cout << "Total fuel is " << totalFuel << endl;

	return 0;
}