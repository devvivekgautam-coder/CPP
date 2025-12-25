#include <iostream>
using namespace std;

class Car {
    public:
        int car_id;
        string car_company_name;
        string car_color;
        string car_model;
        int car_release_year;
};

int main () {
    Car caar1, caar2, caar3, caar4;
    cout << "Press 1 for show car1 details." << endl;
    cout << "Press 2 for show car2 details." << endl;
    cout << "Press 3 for show car3 details." << endl;
    cout << "Press 4 for show car4 details." << endl;

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            caar1.car_id = 101010;
            cout << "Car id is : " << caar1.car_id << endl;

            caar1.car_company_name = "BMW";
            cout << "Car name is : " << caar1.car_company_name << endl;
            
            caar1.car_color = "Black";
            cout << "Car color is : " << caar1.car_color << endl;

            caar1.car_model = "X1";
            cout << "Car model is : " << caar1.car_model << endl;

            caar1.car_release_year = 2024;
            cout << "Car Release Year is : " << caar1.car_release_year << endl;
        break;

        case 2:
            caar2.car_id = 201020;
            cout << "Car id is : " << caar2.car_id << endl;

            caar2.car_company_name = "BYD";
            cout << "Car name is : " << caar2.car_company_name << endl;
            
            caar2.car_color = "Sliver";
            cout << "Car color is : " << caar2.car_color << endl;

            caar2.car_model = "Sealion 7 ";
            cout << "Car model is : " << caar2.car_model << endl;

            caar2.car_release_year = 2026;
            cout << "Car Release Year is : " << caar2.car_release_year << endl;
        break;

        case 3:
            caar3.car_id = 302010;
            cout << "Car id is : " << caar3.car_id << endl;

            caar3.car_company_name = "TATA";
            cout << "Car name is : " << caar3.car_company_name << endl;
            
            caar3.car_color = "Golden Silver";
            cout << "Car color is : " << caar3.car_color << endl;

            caar3.car_model = "Harriar";
            cout << "Car model is : " << caar3.car_model << endl;

            caar3.car_release_year = 2027;
            cout << "Car Release Year is : " << caar3.car_release_year << endl;
        break;

        case 4:
            caar4.car_id = 403010;
            cout << "Car id is : " << caar4.car_id << endl;

            caar4.car_company_name = "Mahendra";
            cout << "Car name is : " << caar4.car_company_name << endl;
            
            caar4.car_color = "Red";
            cout << "Car color is : " << caar4.car_color << endl;

            caar4.car_model = "Scorpio X7";
            cout << "Car model is : " << caar4.car_model << endl;

            caar4.car_release_year = 2026;
            cout << "Car Release Year is : " << caar4.car_release_year << endl;
        break;

        default:
            cout << "Enter a valid choice.";
        break;
    }

    return 0;
}