#include <iostream>
using namespace std;

class FastFood {
    private:
        int cafe_id;
        string cafe_name;
        string cafe_type;
        string cafe_rating;
        string cafe_location;
        int cafe_establish_year;
        int cafe_staff_quantity;

    public:
        FastFood () {
        
        }

        FastFood (int cafe_id, string cafe_name, string cafe_type, string cafe_rating, string cafe_location, int cafe_establish_year, int cafe_staff_quantity) {
            this->cafe_id = cafe_id;
            this->cafe_name = cafe_name;
            this->cafe_type = cafe_type;
            this->cafe_rating = cafe_rating;
            this->cafe_location  = cafe_location;
            this->cafe_establish_year = cafe_establish_year;
            this->cafe_staff_quantity = cafe_staff_quantity;
        }

        void getFoodData () {
            cout << "__________________________________________________________" << endl;
            cout << "Cafe Id : " << this->cafe_id << endl;
            cout << "Cafe Name : " << this->cafe_name << endl;
            cout << "Cafe Type : " << this->cafe_type << endl;
            cout << "Cafe Rating : " << this->cafe_rating << endl;
            cout << "Cafe Location : " << this->cafe_location << endl;
            cout << "Cafe Establish Year: " << this->cafe_establish_year << endl;
            cout << "Cafe Staff Quantity : " << this->cafe_staff_quantity << endl;
            cout << "__________________________________________________________" << endl;
        }
};

int main () {

    FastFood f1(1, "Tea", "Normal", "5 Star", "City Light", 2025, 20);
    f1.getFoodData();

    FastFood f2(2, "Coffee", "Roof Top", "4 Star", "Vesu", 2026, 30);
    f2.getFoodData();

    // int cafe_id, cafe_establish_year, cafe_staff_quantity, size;
    // string cafe_name, cafe_type, cafe_rating, cafe_location;

    // cout << "Enter Cafe Num : ";
    // cin >> size;

    // FastFood fastArray[size];

    // for (int i = 0; i < size; i++) {
    //     cout << "Enter Cafe Id : ";
    //     cin >> cafe_id;

    //     cin.ignore();
    //     cout << "Enter Cafe Name : ";
    //     getline(cin, cafe_name);

    //     cout << "Enter Cafe Type : ";
    //     getline(cin, cafe_type);

    //     cout << "Enter Cafe Rating : ";
    //     getline(cin, cafe_rating);

    //     cout << "Enter Cafe Location : ";
    //     getline(cin, cafe_location);

    //     cout << "Enter Cafe Establish Year : ";
    //     cin >> cafe_establish_year;

    //     cout << "Enter Cafe Staff Quantity : ";
    //     cin >> cafe_staff_quantity;
        
    //     fastArray[i] = FastFood(cafe_id, cafe_name, cafe_type, cafe_rating, cafe_location, cafe_establish_year, cafe_staff_quantity);

    // }    

    // for (int i = 0; i < size; i++) {
    //     fastArray[i].getFoodData();
    // }

    return 0;
}