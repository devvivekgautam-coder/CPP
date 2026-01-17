// Extend the Vehicle hierarchy from Question 3 to include a virtual function displayDetails(). 
// Implement the displayDetails() function in each derived class to print information specific to 
// the vehicle. Create an array of Vehicle pointers, pointing to objects of different vehicles. 
// Demonstrate polymorphism by calling the displayDetails() function for each object.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
private:
    string model;
    double speed;   // km/h

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

    // Pure virtual functions
    virtual double calculateTime(double distance) const = 0;
    virtual void displayDetails() const = 0;

    // Virtual destructor (good practice)
    virtual ~Vehicle() {}
};

// Derived class: Car
class Car : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed();
    }

    void displayDetails() const override {
        cout << "Vehicle Type: Car" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed();
    }

    void displayDetails() const override {
        cout << "Vehicle Type: Bike" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
    }
};

int main() {
    // Create objects
    Car car;
    car.setModel("Sedan");
    car.setSpeed(100);

    Bike bike;
    bike.setModel("Mountain Bike");
    bike.setSpeed(40);

    // Array of base class pointers
    Vehicle* vehicles[2];
    vehicles[0] = &car;
    vehicles[1] = &bike;

    // Demonstrating polymorphism
    for (int i = 0; i < 2; i++) {
        vehicles[i]->displayDetails();
        cout << "Time to travel 200 km: "
             << vehicles[i]->calculateTime(200)
             << " hours" << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}