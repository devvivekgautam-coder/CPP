#include <iostream>
using namespace std;

class Area {
    public:
        float areaofCricle(float pi, int r) {
            cout << "Enter the redious of cricle : ";
            cin >> r;
            return 3.41 * r * r;
        }

        int areaofSqure(int s) {
            cout << "Enter the side of Squre : ";
            cin >> s;
            return s * s;
        }

        float areaofTriangle(float h, float b) {
            cout << "Enter the height and breath of tringle : ";
            cin >> h >> b;
            return 0.5 * h * b;
        }

        int areaofRectangle(int l, int b) {
            cout << "Enter the length and breath of Rectangle : ";
            cin >> l >> b;
            return l * b;
        }

        int areaofSemicricle(int r) {
            cout << "Enter the length and breath of Rectangle : ";
            cin >> r;
            return 0.5 * 3.14 * r * r;
        }
};

int main () {
    Area ar;

    cout << "Press 1 for finding Area of Cricle." << endl;
    cout << "Press 2 for finding Area of Triangle." << endl;
    cout << "Press 3 for finding Area of Squre." << endl;
    cout << "Press 4 for finding Area of Reactangle." << endl;
    cout << "Press 5 for finding Area of Semi Cricle." << endl;

    int num;
    cout << "Enter your chooice : ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Area of Cricle Is : " << ar.areaofCricle(0, 0);
        break;

        case 2:
            cout << "Area of Traingle Is : " << ar.areaofTriangle(0, 0);
        break;

        case 3:
            cout << "Area of Squre Is : " << ar.areaofSqure(0);
        break;

        case 4:
            cout << "Area of Reactangle Is : " << ar.areaofRectangle(0, 0);
        break;

        case 5:
            cout << "Area of Semi Cricle Is : " << ar.areaofSemicricle(0);
        break;

        default :
            cout << "Enter a valid Chooice.";
        break;
    }

    return 0;
}