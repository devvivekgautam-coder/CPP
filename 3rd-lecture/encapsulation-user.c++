#include <iostream>
using namespace std;

class Student {
    private:
        int std_id;
        string std_name;
        int std_age;
        string std_course;
        string stu_city;
        string stu_email;
        string stu_college;

    public:   // Setter
        void setStudentData(int std_id, string std_name, int std_age, string std_course, string stu_city, string stu_email, string stu_college) {

            this->std_id = std_id;
            this->std_name = std_name;
            this->std_age = std_age;
            this->std_course = std_course;
            this->stu_city = stu_city;
            this->stu_email = stu_email;
            this->stu_college = stu_college; 
        }

        void getStudentData() {    // Getter
            cout << "Student's ID : " << this->std_id << endl;
            cout << "Student's Name : " << this->std_name << endl;
            cout << "Student's Age : " << this->std_age << endl;
            cout << "Student's Course : " << this->std_course << endl;
            cout << "Student's City : " << this->stu_city << endl;
            cout << "Student's Email ID : " << this->stu_email << endl;
            cout << "Student's Collage : " << this->stu_college << endl;
        }
};

int main () {
    int size, std_id, std_age;
    string std_name, std_course, stu_city, stu_email, stu_collage;
    cout << "Enter the size of Students : ";
    cin >> size;

    Student arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter Student's Id : ";
        cin >> std_id;

        cout << "Enter Student's name : ";
        cin >> std_name;

        cout << "Enter Student's age : ";
        cin >> std_age;

        cout << "Enter Student's Course : ";
        cin >> std_course;

        cout << "Enter Student's City : ";
        cin >> stu_city;

        cout << "Enter Student's email : ";
        cin >> stu_email;

        cout << "Enter Student's collage : ";
        cin >> stu_collage;

        arr[i].setStudentData(std_id, std_name, std_age, std_course, stu_city, stu_email, stu_collage);
    }

    for (int i = 0; i < size; i++) {
        arr[i].getStudentData();
    }

    return 0;
}