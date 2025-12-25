#include <iostream>
using namespace std;

class CopyConst{
    private:
        int age;
        string name;
    public:
        CopyConst (int age, string name) {
            this->age = age;
            this->name = name;
        }

        // Copy Constractor Created
        CopyConst (const CopyConst &v) {
            age = v.age;
            name = v.name;
        }

        void getCopyData () {
            cout << "-----------------------------" << endl;
            cout << "Your Age : " << this->age << endl;
            cout << "Your Name : " << this->name << endl;
            cout << "-----------------------------" << endl;
        }
};

int main () {
    CopyConst c1(18, "Deku");
    CopyConst c2 = c1;  // Coping at here

    c1.getCopyData();
    c2.getCopyData();  // Print at Here

    return 0;
}