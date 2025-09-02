#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int mainDiagonalSum = 0;

    cout << "Fill the 3x3 matrix with integers:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nFormatted Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
            if (i == j) {
                mainDiagonalSum += matrix[i][j];
            }
        }
        cout << endl;
    }

    cout << "\nSum of the main diagonal: " << mainDiagonalSum << endl;

    return 0;
}
