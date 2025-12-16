#include <iostream>
using namespace std;

class Vehicle
{
private:
    int vehicleNo;
    string ownerName;
    string vehicleType;

public:
    void setVehicleData(int vehicleNo, string ownerName, string vehicleType)
    {
        this->vehicleNo = vehicleNo;
        this->ownerName = ownerName;
        this->vehicleType = vehicleType;
    }

    void getVehicleData()
    {
        cout << endl << "------------ Printing Vehicle Data ------------" << endl;
        cout << "Vehicle Number : " << this->vehicleNo << endl;
        cout << "Owner Name     : " << this->ownerName << endl;
        cout << "Vehicle Type   : " << this->vehicleType << endl;
    }

    int getVehicleNo()
    {
        return vehicleNo;
    }
};

class Registration : public Vehicle
{
private:
    string regDate;
    string regCity;

public:
    void setRegData(string regDate, string regCity)
    {
        this->regDate = regDate;
        this->regCity = regCity;
    }

    void getRegData()
    {
        cout << "Registration Date : " << this->regDate << endl;
        cout << "Registration City : " << this->regCity << endl;
    }
};

int main()
{
    Registration *array[5];
    int choice, idx = 0;

    do
    {
        cout << endl << "Welcome To Vehicle Registration System." << endl;
        cout << "Press 1 To Register New Vehicle : " << endl;
        cout << "Press 2 To Veiw Vehicle : " << endl;
        cout << "Press 3 To Search Vehicle : " << endl;
        cout << "Press 4 To Delete Vehicle : " << endl;
        cout << "Press 5 To Exit : " << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            array[idx] = new Registration;

            int vehicleNo;
            string ownerName, vehicleType, regDate, regCity;

            cout << "Enter Vehicle Number : ";
            cin >> vehicleNo;

            cin.ignore();
            cout << "Enter Owner Name : ";
            getline(cin, ownerName);

            cout << "Enter Vehicle Type (Car/Bike) : ";
            getline(cin, vehicleType);

            cout << "Enter Registration Date : ";
            getline(cin, regDate);

            cout << "Enter Registration City : ";
            getline(cin, regCity);

            array[idx]->setVehicleData(vehicleNo, ownerName, vehicleType);
            array[idx]->setRegData(regDate, regCity);
            idx++;

            cout << "Vehicle Added Successfully...." << endl;
            break;
        }

        case 2:
        {
            if (idx == 0)
            {
                cout << "No Data Found :";
                break;
            }

            for (int i = 0; i < idx; i++)
            {
                array[i]->getVehicleData();
                array[i]->getRegData();
            }

            break;
        }

        case 3:
        {
            if (idx == 0)
            {
                cout << "No Data Found :";
                break;
            }
            int key, flag = 0;
            cout << "Enter Vehicle No To Search : ";
            cin >> key;

            for (int i = 0; i < idx; i++)
            {
                if (key == array[i]->getVehicleNo())
                {
                    array[i]->getVehicleData();
                    array[i]->getRegData();
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                cout << "No Data Found :";
                break;
            }

            break;
        }

        case 4:
        {
            int key, flag = 0;
            cout << "Enter Vehicle No To Delete : ";
            cin >> key;

            for (int i = 0; i < idx; i++)
            {
                if (key == array[i]->getVehicleNo())
                {
                    delete array[i];
                    for (int j = i; j < idx - 1; j++)
                    {
                        array[j] = array[j + 1];
                    }
                    idx--;
                    flag = 1;
                }
            }
            break;
        }

        case 5:
        {
            cout << "Thank You!!!!" << endl;
            break;
        }
        }
    }
    while (choice != 5);

    return 0;
}