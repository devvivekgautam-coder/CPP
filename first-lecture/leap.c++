#include <iostream>

using namespace std;

int main () {
    int firstYear, secondYear;

    cout << "Enter any First Year : "; 
    cin >> firstYear; 

    cout << "Enter any Second Year : "; 
    cin >> secondYear;

    for (int i = firstYear; i < secondYear; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " ";
        }
    }
    
    return 0;
}