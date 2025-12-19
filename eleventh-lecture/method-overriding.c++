#include <iostream>
using namespace std;

class Cricket {
    public:
        void getTotalOvers() {
            cout << "Total Overs (One Day) : 50" << endl;
        }
};

class T20Match : public Cricket {
    public:
        void getTotalOvers() {
            cout << "Total Overs (T20) : 20" << endl;
        }
};

class TestMatch : public T20Match {
    public:
        void getTotalOvers() {
            cout << "Total Overs (Test) : Per Day 90 For 5 Days" << endl;
        }
};

int main () {
    TestMatch test1;
    test1.getTotalOvers();

    T20Match t20;
    t20.getTotalOvers();

    Cricket c1;
    c1.getTotalOvers();

    return 0;
}