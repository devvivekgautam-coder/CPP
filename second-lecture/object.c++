#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        int age;

};

int main () {
    Student s1;

    s1.name = "manoj";

    cout << s1.name;
    
    return 0;
}