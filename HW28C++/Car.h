#pragma once

#include <iostream>
#include <string>

using namespace std;

class PassengerCar {
protected:
    string brand;
    string color;
    double tankVolume;
    double fuelConsumption;

public:
    PassengerCar();
    PassengerCar(string brand, string color, double tankVolume, double fuelConsumption);
    virtual ~PassengerCar();

    void setBrand(string brand);
    string getBrand() const;

    void setColor(string color);
    string getColor() const;

    void setTankVolume(double tankVolume);
    double getTankVolume() const;

    void setFuelConsumption(double fuelConsumption);
    double getFuelConsumption() const;

    double calculateMaxDistance() const;
    void show() const;
};

class Truck : public PassengerCar {
private:
    double loadCapacity;

public:
    Truck();
    Truck(string brand, string color, double tankVolume, double fuelConsumption, double loadCapacity);
    ~Truck();

    void setLoadCapacity(double loadCapacity);
    double getLoadCapacity() const;

    double calculateCostPerTonKm(double fuelPrice) const;
    void show() const;
};