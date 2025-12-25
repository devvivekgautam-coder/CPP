#include <iostream>
using namespace std;

class TicketConformation {
    private:
        string name;
        string destination;
        int ticket_no;
        int train_no;
        int seat_no;

    public:
        void setTrainData(string name, string destination, int ticket_no, int train_no, int seat_no) {
            this->name = name;
            this->destination = destination;
            this->ticket_no = ticket_no;
            this->train_no = train_no;
            this->seat_no = seat_no;
    }

    void getTrainData() {
            cout << "------------------Data Printing-----------------" << endl;
            cout << "Name : " << this->name << endl;
            cout << "Destination : " << this->destination << endl;
            cout << "Ticket No : " << this->ticket_no << endl;
            cout << "Train No : " << this->train_no << endl;
            cout << "Seat No : " << this->seat_no << endl;
            cout << "--------------------------------------------------" << endl;
    }

    int getTicket() {
            return ticket_no;
    }
};

int main() {
    int choice, idx = 0;
    TicketConformation array[5];

    do {
    cout << "Press 1 For Add a New Passanger : " << endl;
    cout << "Press 2 For View All Passanger's Details : " << endl;
    cout << "Press 3 Search Passanger : " << endl;
    cout << "Press 4 Exit : " << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;


    switch (choice) {
    case 1: {
        string name, destination;
        int ticket_no, train_no, seat_no;

        cin.ignore();
        cout << "Enter Passanger's Name : ";
        getline(cin, name);

        cout << "Enter Destination : ";
        getline(cin, destination);

        cout << "Enter Ticket No : ";
        cin >> ticket_no;

        cout << "Enter Train No : ";
        cin >> train_no;

        cout << "Enter Seat No : ";
        cin >> seat_no;

        cout << "Data Added..." << endl;

        array[idx++].setTrainData(name, destination, ticket_no, train_no, seat_no);
        break;
    }

    case 2:{
        for (int i = 0; i < idx; i++) {
            array[i].getTrainData();
        }
        break;
    }

    case 3:{
        int key, flag = 0;
        cout << "Enter Ticket Number Which You Want To Search : ";
        cin >> key;

        for (int i = 0; i < idx; i++) {
            if  (key == array[i].getTicket()) {
                flag = 1;
                array[i].getTrainData();
                break;
            }
        }

        if (flag == 0) {
            cout << "No Data Found !!" << endl;
        }
        break;
    }

    case 4:{
        cout << "Thank You...";
        break;
    }

    default:
        cout << "Invalid Choice!!!" << endl;
    }

    } while (choice != 4);
    
    return 0;
}