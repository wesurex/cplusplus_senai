#include <iostream>
using namespace std;

int main() {
    int identity[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                identity[i][j] = 1;
            } else {
                identity[i][j] = 0;
            }
        }
    }

    cout << "4x4 Identity Matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << identity[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
