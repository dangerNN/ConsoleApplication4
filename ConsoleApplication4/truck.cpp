#include "truck.h"
#include <iostream>
using namespace std;

Truck::Truck(string b, string c, double volume, double consumption, double capacity)
    : Car(b, c, volume, consumption), loadCapacity(capacity) {
}

Truck::~Truck() {
}

void Truck::setLoadCapacity(double capacity) { loadCapacity = capacity; }
double Truck::getLoadCapacity() const { return loadCapacity; }

double Truck::calculateTransportCost(double fuelPrice) const {
    return ((fuelConsumption / 100) * fuelPrice) / loadCapacity;
}

void Truck::displayInfo() const {
    Car::displayInfo();
    cout << "Грузоподъемность: " << loadCapacity << " т\n";
}