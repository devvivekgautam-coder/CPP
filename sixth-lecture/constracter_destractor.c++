#include <iostream>
using namespace std;

class HotalManagement{
    private:
        int hotel_id;
        string hotel_name;
        string hotel_type;
        string hotel_rating;
        string hotel_location;
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;

    public:
        HotalManagement(int hotel_id, string hotel_name, string hotel_type, string hotel_rating, string hotel_location, int hotel_establish_year, int hotel_staff_quantity, int hotel_room_quantity) {
            this->hotel_id = hotel_id;
            this->hotel_name = hotel_name;
            this->hotel_type = hotel_type;
            this->hotel_rating = hotel_rating;
            this->hotel_location = hotel_location;
            this->hotel_establish_year = hotel_establish_year;
            this->hotel_staff_quantity = hotel_staff_quantity;
            this->hotel_room_quantity = hotel_room_quantity;
        }

        void getHotalData() {
            cout << "----------------------------------------------" << endl;
            cout << "Hotal ID : " << this->hotel_id << endl;
            cout << "Hotal Name : " << this->hotel_name << endl;
            cout << "Hotal Type : " << this->hotel_type << endl;
            cout << "Hotal Rating : " << this->hotel_rating << endl;
            cout << "Hotal Location : " << this->hotel_location << endl;
            cout << "Hotal Establish Year : " << this->hotel_establish_year << endl;
            cout << "Hotal Staff Quantity : " << this->hotel_staff_quantity << endl;
            cout << "Hotal Room Quantity : " << this->hotel_room_quantity << endl;
        }
};

int main () {
    HotalManagement h1(1, "Taj", "Hotal", "5 Star", "Surat", 1992, 5000, 2);
    h1.getHotalData();
    
    return 0;
}