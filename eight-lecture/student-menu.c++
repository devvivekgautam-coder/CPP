#include <iostream>
using namespace std;

class Student {
private:
    int grid;
    string name;
    int age;
    int roll_no;

public:
    void setStudentData(int grid, string name, int age, int roll_no) {
        this->grid = grid;
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
    }

    void getStudentData() {
        cout << "------------ Printing Data ------------" << endl;
        cout << "Student's Grid     : " << grid << endl;
        cout << "Student's Name     : " << name << endl;
        cout << "Student's Age      : " << age << endl;
        cout << "Student's Roll No  : " << roll_no << endl;
        cout << "------------ End Printing --------------" << endl;
    }

    int getGrid() {
        return grid;
    }
};

int main() {
    Student array[100];
    int idx = 0; 
    int choice;

    do {
        cout << "Press 1 To Add New Students" << endl;
        cout << "Press 2 To View All Students" << endl;
        cout << "Press 3 To Search Student" << endl;
        cout << "Press 4 For Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int count;
            cout << "How Many Students You Want To Add? ";
            cin >> count;

            for (int i = 0; i < count; i++) {

                if (idx >= 100) {
                    cout << "Array is Full! Cannot add more students." << endl;
                    break;
                }

                int grid, age, roll_no;
                string name;

                cout << "Enter Grid : ";
                cin >> grid;

                cin.ignore();
                cout << "Enter Name : ";
                getline(cin, name);

                cout << "Enter Age : ";
                cin >> age;

                cout << "Enter Roll No : ";
                cin >> roll_no;

                array[idx].setStudentData(grid, name, age, roll_no);
                idx++;

                cout << "Student Added Successfully!" << endl;
            }
            break;
        }

        case 2: {
            if (idx == 0) {
                cout << "No Students Added Yet!" << endl;
                break;
            }

            for (int i = 0; i < idx; i++) {
                array[i].getStudentData();
            }
            break;
        }

        case 3: {
            if (idx == 0) {
                cout << "No Students Available To Search!" << endl;
                break;
            }

            int key, found = 0;
            cout << "Enter GRID To Search : ";
            cin >> key;

            for (int i = 0; i < idx; i++) {
                if (array[i].getGrid() == key) {
                    array[i].getStudentData();
                    found = 1;
                    break;
                }
            }

            if (!found) {
                cout << "No Student Found With This GRID!" << endl;
            }
            break;
        }

        case 4:
            cout << "Thank You..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}