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

    public:
        void setStudentData(int std_id, string std_name, int std_age, string std_course, string stu_city, string stu_email, string stu_college) {

            this->std_id = std_id;
            this->std_name = std_name;
            this->std_age = std_age;
            this->std_course = std_course;
            this->stu_city = stu_city;
            this->stu_email = stu_email;
            this->stu_college = stu_college; 
        }

        void getStudentData() {
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
    Student stu1,stu2, stu3, stu4, stu5;

    stu1.setStudentData(10, "Suraj", 24, "Full Stack Development", "Surat", "suraj@gmail.com", "Mahaveer Collage");
    stu1.getStudentData();

    stu2.setStudentData(11, "Dhaval", 21, "Backend Developer", "Ahemdabad", "dhaval@gmail.com", "DRB Collage");
    stu2.getStudentData();

    stu3.setStudentData(12, "Vivek", 18, "Full Stack Developer", "Surat", "vivek@gmail.com", "SVNIT");
    stu3.getStudentData();
    
    return 0;
}