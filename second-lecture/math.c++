#include <iostream>
using namespace std;
class Student {
    public:
        int sum(int x,int y) {
            cout << "Enter two number : ";
            cin >> x >> y;
            return x + y;
        }

        int sub(int x,int y) {
            cout << "Enter two number : ";
            cin >> x >> y;
            return x - y;
        }

        int multi(int x,int y) {
            cout << "Enter two number : ";
            cin >> x >> y;
            return x * y;
        }

        int divi(int x,int y) {
            cout << "Enter two number : ";
            cin >> x >> y;
            return x / y;
        }

        int modu(int x,int y) {
            cout << "Enter two number : ";
            cin >> x >> y;
            return x % y;
        }
};

int main () {

    Student s1;

    cout << "Press 1 for +" << endl;
    cout << "Press 2 for -" << endl;
    cout << "Press 3 for *" << endl;
    cout << "Press 4 for /" << endl;
    cout << "Press 5 for %" << endl;

    int num;
    cout << "Enter any num : ";
    cin >> num;

    switch (num) {

        case 1 :
           cout << "Sum : " << s1.sum(0, 0);
        break;   

        case 2 :
           cout << "Sub : " << s1.sub(0, 0);
        break;   

        case 3 :
           cout << "Multi : " << s1.multi(0, 0);
        break;

        case 4 :
           cout << "Divid : " << s1.divi(0, 0);
        break; 

        case 5 :
           cout << "Modu : " << s1.modu(0, 0);
        break;   
        
        default :
            cout << "Enter a valid num !";
        break;
    }
    
    return 0;
}