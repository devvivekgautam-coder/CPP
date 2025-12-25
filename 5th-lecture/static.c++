#include <iostream>
using namespace std;

class Car {
    private:
        static string car_company;
        string car_name;
        string car_color;
        int car_speed;
        float car_average;
        int car_year;
    
    public:
        void setCarData(string car_name, string car_color, int car_speed, float car_average, int car_year) {
            this->car_name = car_name;
            this->car_color = car_color;
            this->car_speed = car_speed;
            this->car_average = car_average;
            this->car_year = car_year;
        }

        void getCarData() {
            cout << "----------------------------------------------------" << endl;
            cout << "Car Name : " << this->car_name << endl;
            cout << "Car Color : " << this->car_color << endl;
            cout << "Car Speed : " << this->car_speed << endl;
            cout << "Car Average : " << this->car_average << endl;
            cout << "Car Year : " << this->car_year << endl;
            cout << "----------------------------------------------------" << endl;
        }
};

static string car_company = "Toyota";

int main () {
    float average;
    int speed, year, size = 1;
    string name, color;
    int totalSpeed = 0;
    float totalAvg = 0;
    
    cout << "Enter the Number of Cars : ";
    cin >> size;

    Car arrayCar[size];

    for (int i = 0; i < size; i++) {
        cin.ignore();
        cout << "Enter Car Name : ";
        getline(cin, name);

        cout << "Enter Car Color : ";
        getline(cin, color);

        cout << "Enter Car's Maximum Speed : ";
        cin >> speed;
        totalSpeed += speed;

        cout << "Enter Car's Average Speed Per Liter : ";
        cin >> average;
        totalAvg += average;

        cout << "Enter Car's Manufacturing Year : ";
        cin >> year;

        arrayCar[i].setCarData(name, color, speed, average, year);
        cout << "--------------------------------------------------------" << endl;
    }
    
    for (int i = 0; i < size; i++) {
        arrayCar[i].getCarData();
        cout << "--------------------------------------------------------" << endl;
    }
    
    float avgOfSpeed = (float)totalSpeed / size;
    float avgOfCar = totalAvg / size;

    cout << "Average of Speed : " << avgOfSpeed << endl << "Average of Car : " << avgOfCar;
    return 0;
}