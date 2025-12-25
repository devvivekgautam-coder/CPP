#include <iostream>
using namespace std;

class RailwayTicket {
    private:
        int ticket_no;
        string pass_name;
        int pass_age;
        string destination;
        int train_no;
        int seat_no;
    public:
        RailwayTicket () {
            cout << "Defalt Constractor Called." << endl;
        }
        
        RailwayTicket (int ticket_no,int pass_age, int train_no, int seat_no, string pass_name, string destination) {
            this->ticket_no = ticket_no;
            this->pass_name = pass_name;
            this->pass_age = pass_age;
            this->destination = destination;
            this->train_no = train_no;
            this->seat_no = seat_no;
        }
        void getTicketData() {
            cout << "----------------------------------------------------" << endl;
            cout << "Ticket No : " << this->ticket_no << endl;
            cout << "Passanger Name : " << this->pass_name << endl;
            cout << "Passanger Age : " << this->pass_age << endl;
            cout << "Destination : " << this->destination << endl;
            cout << "Train No : " << this->train_no << endl;
            cout << "Seat No : " << this->seat_no << endl;
            cout << "----------------------------------------------------" << endl;
        }

        ~RailwayTicket () {
            cout << "Distractor Called." << endl;
        }

};

int main () {
    int size = 1, tik_no, pass_age, train_no, seat_no;
    string pass_name, destination;

    cout << "Enter Size Of Passanger : ";
    cin >> size;

    RailwayTicket arr[size];

    for (int i = 0; i < size; i++) {

        cout << "Enter ticket No : ";
        cin >> tik_no;

        cout << "Enter Pass age : ";
        cin >> pass_age;

        cout << "Enter Train No : ";
        cin >> train_no;

        cout << "Enter Seat No : ";
        cin >> seat_no;

        cin.ignore();
        cout << "Enter Pass Name : ";
        getline(cin, pass_name);

        cout << "Enter Destination : ";
        getline(cin, destination);

        arr[i] = RailwayTicket (tik_no, pass_age, train_no, seat_no, pass_name, destination);
    }

    for (int i = 0; i < size; i++) {
        arr[i].getTicketData();
    }

    return 0;
}