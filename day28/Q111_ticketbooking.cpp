#include <iostream>
using namespace std;

int main()
{
    int seats = 10, choice, book;
    while (true)
    {
        cout << "\n1. Book Ticket\n2. Check Available Seats\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter number of tickets to book: ";
            cin >> book;
            if (book <= seats)
            {
                seats -= book;
                cout << "Booking successful! Remaining seats: " << seats << endl;
            }
            else
            {
                cout << "Not enough seats available.\n";
            }
        }
        else if (choice == 2)
        {
            cout << "Available seats: " << seats << endl;
        }
        else
            break;
    }
    return 0;
}
