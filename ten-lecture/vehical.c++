#include <iostream>
using namespace std;

class Vehicle {
    private:
        int vehicleNo;
        string ownerName;
        string vehicleType;

    public:
        void setVehicle() {
        }
        void setVehicle(int vehicleNo ,string ownerName, string vehicleType) {
            this->vehicleNo = vehicleNo;
            this->ownerName = ownerName;
            this->vehicleType = vehicleType;
        }

        void getVehicle() {
            cout << "Vehicle Number : " << vehicleNo << endl;
            cout << "Owner Name     : " << ownerName << endl;
            cout << "Vehicle Type   : " << vehicleType << endl;
        }
};

class Registration : public Vehicle {
    private:
        string regDate;
        string regCity;

    public:
        void setdata(string regDate,string regCity){
            this->regDate = regDate;
            this->regCity = regCity;
        }

        
        void getData() {
            cout << "Registration Date : " << regDate << endl;
            cout << "Registration City : " << regCity << endl;
        }
    };
    
    int main() {
        Registration r;
        int choice;
        
        do {
            cout << "VEHICLE REGISTRATION SYSTEM" << endl;
            cout << "1. Register Vehicle" << endl;
            cout << "2. Display Vehicle Details" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            
            switch (choice) {
                case 1:
                {
                    int vehicleNo;
                    string ownerName;
                    string vehicleType;
                    string regDate;
                    string regCity;
                    
                    cout << "Enter Vehicle Number: ";
                    cin >> vehicleNo;

                    cin.ignore();
                    cout << "Enter Owner Name: ";
                    getline(cin,ownerName);

                    cout << "Enter Vehicle Type (Car/Bike): ";
                    getline(cin,vehicleType);

                    cout << "Enter Registration Date: ";
                    getline(cin,regDate);

                    cout << "Enter Registration City: ";
                    getline(cin,regCity);
                    
                    cout << "Vehicle Registered Successfully!" << endl;

                    r.setVehicle(vehicleNo,ownerName,vehicleType);
                    r.setdata(regDate, regCity);
            break;
        }
        case 2:
            r.getVehicle();
            r.getData();
            break;
        case 3:
            cout << "Exiting Program...";
            break;

        default:    
            cout << "Invalid Choice!";
        }

    } while (choice != 3);

    return 0;
}
