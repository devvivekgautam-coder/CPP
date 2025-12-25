#include <iostream>
using namespace std;

class Cricket {
public:
    virtual void getTotalOvers() {
        cout << "Cricket Match Overs" << endl;
    }
};

class T20Match : public Cricket {
public:
    void getTotalOvers() {
        cout << "Total Overs in T20 Match : 20 Overs" << endl;
    }
};

class TestMatch : public Cricket {
public:
    void getTotalOvers() {
        cout << "Total Overs in Test Match : 90 Overs per day for 5 days" << endl;
    }
};

int main() {
    Cricket *c;

    T20Match t20;
    TestMatch test;

    c = &t20;
    c->getTotalOvers();

    c = &test;
    c->getTotalOvers();

    return 0;
}