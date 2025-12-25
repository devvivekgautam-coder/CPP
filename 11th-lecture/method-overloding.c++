#include <iostream>
using namespace std;

class Math {

};

class Sum : public Math {
    public:
        int calculate(int a, int b) {
            return a / b;
        }

        int calculate(int a, int b, int c) {
            return a - b - c;
        }

        int calculate(int a, int b, int c, int d) {
            return a * b * c * d;
        }

        int calculate(int a, int b, int c, int d, int e) {
            return a + b + c + d + e;
        }
};

int main () {
    Sum s1;
    cout << "Sum : " << s1.calculate(1, 2, 3, 4, 5);
    return 0;
}