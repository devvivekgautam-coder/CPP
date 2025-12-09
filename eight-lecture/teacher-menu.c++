#include <iostream>
using namespace std;

class Teacher {
    private:
        string teach_name;
        int teach_age;
        string subject;
        int teach_id;

    public:
        void setTeacherData(string teach_name, int teach_age, string subject, int teach_id) {
            this->teach_name = teach_name;
            this->teach_age = teach_age;
            this->subject = subject;
            this->teach_id = teach_id;
        }

        void getTeacherData() {
            cout << "------------- Printing Data -------------" << endl;
            cout << "Teacher Name       : " << this->teach_name << endl;
            cout << "Teacher Age        : " << this->teach_age << endl;
            cout << "Teacher Subject    : " << this->subject << endl;
            cout << "Teacher ID         : " << this->teach_id << endl;
            cout << "------------- End Printing -------------" << endl << endl;
        }

        int getTeacherId() {
            return teach_id;
        }
};

int main () {
    int choice, idx = 0;
    Teacher array[5];

    do
    {
        cout << "Press 1 To Add New Teacher : " << endl;
        cout << "Press 2 To View Details : " << endl;
        cout << "Press 3 To Search Any Teacher : " << endl;
        cout << "Press 4 To Exit : " << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string teach_name, subject;
                int teach_age, teach_id;

                cin.ignore();
                cout << "Enter Teacher Name : ";
                getline(cin, teach_name);

                cout << "Enter Teacher Age : ";
                cin >> teach_age;

                cin.ignore();
                cout << "Enter Subject : ";
                getline(cin, subject);

                cout << "Enter Id : ";
                cin >> teach_id;

                array[idx++].setTeacherData(teach_name, teach_age, subject, teach_id);

                break;
            }

            case 2: {
                for (int i = 0; i < idx; i++) {
                    array[i].getTeacherData();
                }
                break;
            }

            case 3: {
                int key, found = 0;
                cout << "Enter Teacher Id To Search : ";
                cin >> key;
                for (int i = 0; i < idx; i++) {
                    if (key == array[i].getTeacherId()) {
                        found = 1;
                        array[i].getTeacherData();
                        break;
                    }
                }

                if (found == 0) {
                    cout << "No Data Found !!!" << endl;
                }
                break;
            }

            case 4: {
                cout << "Thank You..." << endl;
                break;
            }

            default: 
                cout << "Invalid Choice : " << endl;
        }
    } while (choice != 4);
    
    return 0;
}