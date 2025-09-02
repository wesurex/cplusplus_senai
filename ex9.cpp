#include <iostream>
using namespace std;

int main() {
    int numbers[8];
    int largest, smallest;

    cout << "Enter 8 integers:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }

    largest = smallest = numbers[0];

    for (int i = 1; i < 8; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}

