#include <iostream>
using namespace std;

int main () {

    int start, end;

    cout << "Enter the start array : ";
    cin >> start;

    cout << "Enter the end array : ";
    cin >> end;

    int size = 0;
    
    for (int i = start; i <= end; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            size++;
        }
    }
    
    int array[size];

    int index = 0;
    for (int i = start; i <= end; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            array[index++] = i;
        }
    }
    
    for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
    }
    
    return 0;
}