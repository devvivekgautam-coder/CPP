#include <iostream>
using namespace std;

class X {
    public:
        int a, b, c;
};

class Y : public X {
    public:
        int sum;

        void setData(int a, int b, int c) {
            this->a = a * a * a;
            this->b = b * b * b;
            this->c = c * c * c;
            sum = this->a + this->b + this->c;
        }

        void getData() {
            cout << "--- Cube Values ---" << endl;
            cout << "Cube of A : " << a << endl;
            cout << "Cube of B : " << b << endl;
            cout << "Cube of C : " << c << endl;
            cout << "Sum of all cubes : " << sum << endl;
        }
};

int main() {
    Y obj;
    int x, y, z;

    cout << "Enter Any Three numbers: ";
    cin >> x >> y >> z;

    obj.setData(x, y, z);
    obj.getData();

    return 0;
}