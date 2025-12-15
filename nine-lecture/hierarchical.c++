#include <iostream>
using namespace std;

class RBI {
    public:
        float rate;
};

class SBI : public RBI {
    public:
        SBI() {
            rate = 6.5;
        }
        void getRate() {
            cout << "Rate of Interest of SBI: " << rate << "%" << endl;
        }
};

class BOB : public RBI {
    public:
        BOB() {
            rate = 6.75;
        }
        void getRate() {
            cout << "Rate of Interest of BOB: " << rate << "%" << endl;
        }
};    

class ICICI : public RBI {
    public:
        ICICI() {
            rate = 7.0;
        }
        void getRate() {
            cout << "Rate of Interest of ICICI: " << rate << "%" << endl;
        }
};

int main () {
    SBI s;
    BOB b;
    ICICI i;

    s.getRate();
    b.getRate();
    i.getRate();

    return 0;
}