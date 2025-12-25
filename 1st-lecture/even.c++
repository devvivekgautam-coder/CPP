#include <iostream>

using namespace std;

int main () {
    int size;
    cout << "Enter the size of Array : ";
    cin >> size;

    int arry[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter The Value of Array : ";
        cin >> arry[i];
    }

    for (int data : arry) {
        if (data % 2 == 0) {
            cout << data << " "; 
        }
    }
    return 0;
}