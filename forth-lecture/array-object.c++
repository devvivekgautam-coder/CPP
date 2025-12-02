#include <iostream>
using namespace std;

class Customer{
    private:
        int cust_id;
        string cust_name;
        int cust_age;
        string cust_city;
        int cust_mobile_number;
        int cust_simcard_validity;
        string cust_telecom_brand_name;

    public:
        void setCustomerData(int cust_id, string cust_name, int cust_age, string cust_city, int cust_mobile_number, int cust_simcard_validity, string cust_telecom_brand_name){
            this->cust_id = cust_id;
            this->cust_name = cust_name;
            this->cust_age = cust_age;
            this->cust_city = cust_city;
            this->cust_mobile_number = cust_mobile_number;
            this->cust_simcard_validity = cust_simcard_validity;
            this->cust_telecom_brand_name = cust_telecom_brand_name;
        }

        void getCustomerData() {
            cout << "---------------------------------------------------" << endl;
            cout << "Customer's ID : " << this->cust_id << endl;
            cout << "Customer's Name : " << this->cust_name << endl;
            cout << "Customer's Age : " << this->cust_age << endl;
            cout << "Customer's City : " << this->cust_city << endl;
            cout << "Customer's Mobile Number : " << this->cust_mobile_number << endl;
            cout << "Customer's SIM Validation : " << this->cust_simcard_validity << endl;
            cout << "Customer's Telecom Brand : " << this->cust_telecom_brand_name << endl;
            cout << "---------------------------------------------------" << endl << endl;
        }
};

int main () {
    int size  = 1, id, age, valid, modile;
    string name, city, brand;

    cout << "Enter the Number of Customer : ";
    cin >> size;

    Customer array[size];

    for (int i = 0; i < size; i++) {

        cout << "Enter Customer's Id : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Customer's name : ";
        getline(cin, name);

        cout << "Enter Customer's Age : ";
        cin >> age;

        cin.ignore();
        cout << "Enter Customer's City : ";
        getline(cin, city);

        cout << "Enter Customer's Mobile Number : ";
        cin >> modile;

        cout << "Enter Customer's SIM Validation : ";
        cin >> valid;

        cin.ignore();
        cout << "Enter Customer's Brand : ";
        getline(cin, brand);

        array[i].setCustomerData(id, name, age, city, modile, valid, brand);
        cout << "-----------------------------------------------------------" << endl;
    }
    
    for (int i = 0; i < size; i++) {
        array[i].getCustomerData();
        cout << "-----------------------------------------------------------" << endl;
    }

    return 0;
}