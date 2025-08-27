#include <iostream>
using namespace std;

double multiplicationTable1To10WithFor(double n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << endl;
}

double multiplicationTable1To10WithWhile(double n) {
    int i = 1;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    cout << endl;
}

int main () {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    multiplicationTable1To10WithFor(number);
    multiplicationTable1To10WithWhile(number);
    return 0;
}