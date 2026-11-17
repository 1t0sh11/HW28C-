#include "Car.h"

PassengerCar::PassengerCar() {
    brand = "Unknown";
    color = "White";
    tankVolume = 50.0;
    fuelConsumption = 7.5;
}

PassengerCar::PassengerCar(string brand, string color, double tankVolume, double fuelConsumption) {
    this->brand = brand;
    this->color = color;
    this->tankVolume = tankVolume;
    this->fuelConsumption = fuelConsumption;
}

PassengerCar::~PassengerCar() {}

void PassengerCar::setBrand(string brand) { this->brand = brand; }
string PassengerCar::getBrand() const { return brand; }

void PassengerCar::setColor(string color) { this->color = color; }
string PassengerCar::getColor() const { return color; }

void PassengerCar::setTankVolume(double tankVolume) { this->tankVolume = tankVolume; }
double PassengerCar::getTankVolume() const { return tankVolume; }

void PassengerCar::setFuelConsumption(double fuelConsumption) { this->fuelConsumption = fuelConsumption; }
double PassengerCar::getFuelConsumption() const { return fuelConsumption; }

double PassengerCar::calculateMaxDistance() const {
    if (fuelConsumption <= 0) return 0;
    return (tankVolume / fuelConsumption) * 100.0;
}

void PassengerCar::show() const {
    cout << "Brand:\t\t" << brand << "\n";
    cout << "Color:\t\t" << color << "\n";
    cout << "Tank Volume:\t" << tankVolume << " L\n";
    cout << "Consumption:\t" << fuelConsumption << " L/100km\n";
    cout << "Max Distance:\t" << calculateMaxDistance() << " km\n";
}

Truck::Truck() : PassengerCar() {
    loadCapacity = 5.0;
}

Truck::Truck(string brand, string color, double tankVolume, double fuelConsumption, double loadCapacity)
    : PassengerCar(brand, color, tankVolume, fuelConsumption) {
    this->loadCapacity = loadCapacity;
}

Truck::~Truck() {}

void Truck::setLoadCapacity(double loadCapacity) { this->loadCapacity = loadCapacity; }
double Truck::getLoadCapacity() const { return loadCapacity; }

double Truck::calculateCostPerTonKm(double fuelPrice) const {
    if (loadCapacity <= 0) return 0;
    return ((fuelConsumption / 100.0) * fuelPrice) / loadCapacity;
}

void Truck::show() const {
    cout << "Brand:\t\t" << brand << "\n";
    cout << "Color:\t\t" << color << "\n";
    cout << "Tank Volume:\t" << tankVolume << " L\n";
    cout << "Consumption:\t" << fuelConsumption << " L/100km\n";
    cout << "Load Capacity:\t" << loadCapacity << " tons\n";
    cout << "Max Distance:\t" << calculateMaxDistance() << " km\n";
}