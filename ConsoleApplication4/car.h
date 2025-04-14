#pragma once
#include <string>
using namespace std;

class Car {
protected:
    string brand;
    string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    Car(string b, string c, double volume, double consumption);

    void setBrand(string b);
    void setColor(string c);
    void setFuelTankVolume(double volume);
    void setFuelConsumption(double consumption);

    string getBrand() const;
    string getColor() const;
    double getFuelTankVolume() const;
    double getFuelConsumption() const;

    double calculateDistance() const;
    void displayInfo() const;
};