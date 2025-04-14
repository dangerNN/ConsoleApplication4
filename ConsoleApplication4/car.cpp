#include "car.h"
#include <iostream>
using namespace std;

Car::Car(string b, string c, double volume, double consumption)
    : brand(b), color(c), fuelTankVolume(volume), fuelConsumption(consumption) {
}

void Car::setBrand(string b) { brand = b; }
void Car::setColor(string c) { color = c; }
void Car::setFuelTankVolume(double volume) { fuelTankVolume = volume; }
void Car::setFuelConsumption(double consumption) { fuelConsumption = consumption; }

string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
double Car::getFuelTankVolume() const { return fuelTankVolume; }
double Car::getFuelConsumption() const { return fuelConsumption; }

double Car::calculateDistance() const {
    return (fuelTankVolume / fuelConsumption) * 100;
}

void Car::displayInfo() const {
    cout << "Легковой автомобиль:\n";
    cout << "Марка: " << brand << "\n";
    cout << "Цвет: " << color << "\n";
    cout << "Объем бака: " << fuelTankVolume << " л\n";
    cout << "Расход топлива: " << fuelConsumption << " л/100км\n";
    cout << "Макс. расстояние на полном баке: " << calculateDistance() << " км\n";
}