#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
    private:
        string vehicleNumber;
        string ownerName;
    protected:
        int hour;

    public:
        Vehicle(string vehicleNumber, string ownerName, int hour) {
            this->vehicleNumber = vehicleNumber;
            this->ownerName = ownerName;
            this->hour = hour;
        }

        void getVehicleData() {
            cout << "Vehicle Number : " << vehicleNumber << endl;
            cout << "Owner Name : " << ownerName << endl;
            cout << "Parking Hour : " << hour << endl;
            cout << endl << " = = = = = = = = = = " << endl;
        }

        virtual void calculateFee() = 0;

        virtual ~Vehicle() {}
};

class Car : public Vehicle {
    public:
        Car(string vehicleNumber, string ownerName, int hour)
        : Vehicle(vehicleNumber, ownerName, hour) {
        }

        void calculateFee() override {
            double fee = hour * 50;
            cout << "Total Parking Fee(Car) : " << fee << endl;
        }

};

class Bike : public Vehicle {
    public:
        Bike(string vehicleNumber, string ownerName, int hour)
        : Vehicle(vehicleNumber, ownerName, hour) {
        }

        void calculateFee() override {
            double fee = hour * 30;
            cout << "Total Parking Fee(Bike) : " << fee << endl;
        }
};

class Truck : public Vehicle {
    public:
        Truck(string vehicleNumber, string ownerName, int hour)
        : Vehicle(vehicleNumber, ownerName, hour) {
        }

        void calculateFee() override {
            double fee = hour * 80;
            cout << "Total Parking Fee(Truck) : " << fee << endl;
        }
};

int main () {
    vector<Vehicle*> parking;
    int choice;

    do {
    cout << endl << "WELCOME TO PARKING MANEGMENT SYSTEM" << endl;
    cout << "Press 1 To Park A Car : " << endl;
    cout << "Press 2 To Park A Bike : " << endl;
    cout << "Press 3 To Park A Truck : " << endl;
    cout << "Press 4 To View All Park Vehicle : " << endl;
    cout << "Press 5 To View Your Bill : " << endl;
    cout << "Press 6 To Exit : " << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    string number, name;
    int hour;

    if (choice == 1) {
        cin.ignore();

        cout << "Enter Car Number : ";
        getline(cin, number);

        cout << "Enter Owner Name : ";
        getline(cin, name);

        cout << "Enter Parking Hour : ";
        cin >> hour;

        parking.push_back(new Car(number, name, hour));
        cout << "Car Parked Successfully." << endl;
    } 

    else if (choice == 2) {
        cin.ignore();

        cout << "Enter Bike Number : ";
        getline(cin, number);

        cout << "Enter Owner Name : ";
        getline(cin, name);

        cout << "Enter Parking Hour : ";
        cin >> hour;

        parking.push_back(new Bike(number, name, hour));
        cout << "Bike Parked Successfully." << endl;
    }

    else if (choice == 3) {
        cin.ignore();

        cout << "Enter Truck Number : ";
        getline(cin, number);

        cout << "Enter Owner Name : ";
        getline(cin, name);

        cout << "Enter Parking Hour : ";
        cin >> hour;

        parking.push_back(new Truck(number, name, hour));
        cout << "Truck Parked Successfully." << endl;
    }

    else if (choice == 4) {
        for (int i = 0; i < parking.size(); i++) {
            cout << endl << " = = = = = = = = = = " << endl;
            cout << "Index No. : " << i << endl;
            parking[i]->getVehicleData();
        }
    }

    else if (choice == 5) {
        int idx;
        cout << "Enter Vehicle Index No To Calculate You Bill : ";
        cin >> idx;

        if (idx >= 0 && idx < parking.size()) {
            parking[idx]->calculateFee();
        }
        else {
            cout << "Invalid Vehicle Index!" << endl;
        }
    }
    
    else if (choice == 6) {
        cout << "Thank You!!!!" << endl;
    }

    } while (choice != 6);
    
    for (auto item : parking) {
        delete item;
    }
    return 0;
}