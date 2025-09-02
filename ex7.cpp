#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 50 + 1;
    int guess = 0;

    cout << "Guess the secret number between 1 and 50!" << endl;

    while (guess != secret) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Higher!" << endl;
        } else if (guess > secret) {
            cout << "Lower!" << endl;
        } else {
            cout << "Congratulations! You guessed the number." << endl;
        }
    }

    return 0;
}
