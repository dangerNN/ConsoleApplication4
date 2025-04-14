#include "car.h"
#include "truck.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    Car car("Toyota", "Red", 55, 8.5);
    car.displayInfo();

    cout << "\n";

    Truck truck("Volvo", "Blue", 200, 25, 10);
    truck.displayInfo();

    double fuelPrice = 55.6;
    cout << "Стоимость перевозки 1 тонны на 1 км: "
        << truck.calculateTransportCost(fuelPrice)<<endl;

    return 0;
}