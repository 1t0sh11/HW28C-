#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    PassengerCar car("Toyota Camry", "Black", 60.0, 8.2);
    car.show();
    cout << "\n";

    Truck truck("Volvo FH16", "Blue", 400.0, 32.0, 20.0);
    truck.show();
    cout << "\n";

    double fuelPrice = 55.0;
    cout << "Cost per 1 ton-km (fuel price " << fuelPrice << " UAH/L): "
        << truck.calculateCostPerTonKm(fuelPrice) << " UAH\n";

    return 0;
}
