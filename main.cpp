#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 20
    int randomNumber = rand() % 20 + 1;

    // User's guess
    int guess;

    cout << "Guess the number (between 1 and 20): ";

    do {
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again: ";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed it right.\n";
        }

    } while (guess != randomNumber);

    return 0;
}

