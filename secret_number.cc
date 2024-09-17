#include <iostream>
using namespace std;

int main() {
    srand(time(0));  
    int secretNumber = rand() % 100 + 1; 
    int guess;

    cout << "Guess the secret number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again: ";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed the secret number." << endl;
        }
    }

    return 0;
}
