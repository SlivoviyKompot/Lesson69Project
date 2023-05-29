#include "car.h"

int Car::getTank() {
	return tank;
}

int Car::getSpeed() {
	return speed;
}

int Car::getPower() {
	return power;
}

int Car::getSeats() {
	return seats;
}

void Car::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}

void Car::setSpeed(int speed) {
	if (speed > 0) {
		this->speed = speed;
	}
}

void Car::setPower(int power) {
	if (power > 0) {
		this->power = power;
	}
}
void Car::setSeats(int seats) {
	this->seats = seats;
}