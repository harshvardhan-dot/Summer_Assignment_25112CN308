#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secret = rand() % 100 + 1; // random number 1–100
    int guess;

    cout << "Guess the number (1-100): ";
    do
    {
        cin >> guess;
        if (guess > secret)
            cout << "Too high! Try again: ";
        else if (guess < secret)
            cout << "Too low! Try again: ";
    } while (guess != secret);

    cout << "Correct! The number was " << secret << endl;
    return 0;

    
}
