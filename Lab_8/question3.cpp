#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual double fuelEfficiency() const = 0;
};
class Car : public Vehicle {
private:
    double fuelConsumed; // in liters
    double distanceTraveled; // in kilometers
public:
    Car(double fuel, double distance) : fuelConsumed(fuel), distanceTraveled(distance) {}
    double fuelEfficiency() const override {
        return distanceTraveled / fuelConsumed; // kilometers per liter
    }
};
class Truck : public Vehicle {
private:
    double fuelConsumed; // in liters
    double distanceTraveled; // in kilometers
public:
    Truck(double fuel, double distance) : fuelConsumed(fuel), distanceTraveled(distance) {}
    double fuelEfficiency() const override {
        return distanceTraveled / fuelConsumed; // kilometers per liter
    }
};
int main() {
    double carFuel, carDistance;
    cout << "Enter the fuel consumed (in liters) and distance traveled (in kilometers) by the car: ";
    cin >> carFuel >> carDistance;
    Car car(carFuel, carDistance);
    double truckFuel, truckDistance;
    cout << "Enter the fuel consumed (in liters) and distance traveled (in kilometers) by the truck: ";
    cin >> truckFuel >> truckDistance;
    Truck truck(truckFuel, truckDistance);
    cout << "The fuel efficiency of the car is: " << car.fuelEfficiency() << " km/l" << endl;
    cout << "The fuel efficiency of the truck is: " << truck.fuelEfficiency() << " km/l" << endl;
    return 0;
}
