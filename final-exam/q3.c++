// Define a base class Vehicle with private attributes model and speed. Implement public 
// member functions for setting and getting these attributes. Derive two classes, Car and Bike, 
// from the Vehicle class. Implement methods to calculate the time taken for a certain distance 
// based on the speed of each vehicle. Demonstrate abstraction by calling the time calculation 
// methods for both Car and Bike.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
private:
    string model;
    double speed;   // speed in km/h

public:
    // Setters
    void setModel(string m) {
        model = m;
    }

    void setSpeed(double s) {
        speed = s;
    }

    // Getters
    string getModel() const {
        return model;
    }

    double getSpeed() const {
        return speed;
    }

    // Virtual function for abstraction
    virtual double calculateTime(double distance) const = 0;
};

// Derived class: Car
class Car : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed();
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed();
    }
};

int main() {
    // Create Car object
    Car car;
    car.setModel("Sedan");
    car.setSpeed(80); // km/h

    // Create Bike object
    Bike bike;
    bike.setModel("Sports Bike");
    bike.setSpeed(40); // km/h

    double distance = 160; // km

    // Demonstrating abstraction
    cout << "Car Model: " << car.getModel() << endl;
    cout << "Time taken by Car: "
         << car.calculateTime(distance) << " hours" << endl;

    cout << "----------------------" << endl;

    cout << "Bike Model: " << bike.getModel() << endl;
    cout << "Time taken by Bike: "
         << bike.calculateTime(distance) << " hours" << endl;

    return 0;
}