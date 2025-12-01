// This is the First Practical Exam of C++.

#include <iostream>
using namespace std;

class TimeConverter {
    public:
        int seconds;
        int hower;
        int mins;
        int sec;
};

int main () {
    TimeConverter time;
    recall:
    cout << "Press 1 for convert second to hower : " << endl;
    cout << "Press 2 for convert hower to second : " << endl;
    
    int num;
    cout << "Enter your choice : ";
    cin >> num;
    
    switch (num) {
        case 1:
        cout << "Enter seconds : ";
        cin >> time.seconds;
        
        time.hower =  time.seconds / 3600;
        time.mins =  ((time.seconds - 3600) / 60);
        time.sec = (time.seconds % 60);
        
        
        cout << time.hower << " : " << time.mins << " : " << time.sec;
        break;
        
        case 2:
        cout << "Enter hower : ";
        cin >> time.hower;
        
        cout << "Enter Minuts : ";
        cin >> time.mins;
        
        cout << "Enter second : ";
        cin >> time.sec;
        
        cout << (time.hower * 3600) + (time.mins * 60) + time.sec;
        break;
        
        default:
        cout << "Invalid choice try again.";
        goto recall;
    
    }
    return 0;
}