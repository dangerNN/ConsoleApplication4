#pragma once
#include "car.h"
#include <string>
using namespace std;
class Truck :
    public Car
{
private:
    double loadCapacity;

public:
    Truck(string b, string c, double volume, double consumption, double capacity);
    ~Truck();

    void setLoadCapacity(double capacity);
    double getLoadCapacity() const;
    double calculateTransportCost(double fuelPrice) const;
    void displayInfo() const;
};

