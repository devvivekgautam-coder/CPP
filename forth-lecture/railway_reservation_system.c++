#include <iostream>
using namespace std;

class RailwayReservation {
    private:
        string passengerName;
        int passengerAge;
        string source;
        string destination;
        string trainName;
        int seatNumber;

    public:
        void setPassengerData(string passengerName, int passengerAge, string source, string destination, string trainName, int seatNumber) {
            this->passengerName = passengerName;
            this->passengerAge = passengerAge;
            this->source = source;
            this->destination = destination;
            this->trainName = trainName;
            this->seatNumber = seatNumber;
        }

        void getPassengerData() {
            cout << "-----------------------------------------------------" << endl;
            cout << "Passenger Name : " << this->passengerName << endl;
            cout << "Passenger Age : " << this->passengerAge << endl;
            cout << "Source : " << this->source << endl;
            cout << "Destination : " << this->destination << endl;
            cout << "Train Name : " << this->trainName << endl;
            cout << "Seat Number : " << this->seatNumber << endl;
            cout << "-----------------------------------------------------" << endl;
        }
};


int main () {
    int size = 1, seat_number, passenger_age;
    string train_name, source, passenger_name, destination;

    cout << "How many Passenger you want : ";
    cin >> size;

    RailwayReservation passenger[size];

    for (int i = 0; i < size; i++) {

        cin.ignore();
        cout << "Enter Passenger's Name : ";
        getline(cin, passenger_name);

        cout << "Enter Age : ";
        cin >> passenger_age;

        cin.ignore();
        cout << "Enter Source : ";
        getline(cin, source);

        cin.ignore();
        cout << "Enter Destination : ";
        getline(cin, destination);

        cin.ignore();
        cout << "Enter Train Name : ";
        getline(cin, train_name);

        cout << "Enter Seat Number : ";
        cin >> seat_number;

        passenger[i].setPassengerData(passenger_name, passenger_age, source, destination, train_name, seat_number);
        cout << "--------------------------------------------------------------" << endl;
    }
    
    for (int i = 0; i < size; i++) {
        passenger[i].getPassengerData();
        cout << "--------------------------------------------------------------" << endl;
    }
    
    return 0;
}