#include <iostream>
#include <vector>

using namespace std;

int main () {
    int rows, cols;

    cout << "Enter the rows & cols of array : ";
    cin >> rows >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the elements of the 2D array : ";
            cin >> array[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}