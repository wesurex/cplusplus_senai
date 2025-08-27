#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double minus(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0; 
    }
    return a / b;
}

int main() {
    double num1, num2;
    int choice;
    char sumOpt = '+';
    char minusOpt = '-';
    char mulOpt = '*';
    char divOpt = '/';
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Select operation:\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << num1 << " " << sumOpt << " " << num2 << " = " << sum(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " " << minusOpt << " " << num2 << " = " << minus(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " " << mulOpt << " " << num2 << " = " << multiplication(num1, num2) << endl;
            break;
        case 4:
            cout << num1 << " " << divOpt << " " << num2 << " = " << division(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}