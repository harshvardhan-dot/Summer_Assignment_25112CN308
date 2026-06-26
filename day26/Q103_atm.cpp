#include <iostream>
using namespace std;

int main()
{
    int balance = 10000, choice, amount;

    do
    {
        cout << "\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance: " << balance << endl;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            break;
        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient funds!\n";
            break;
        case 4:
            cout << "Thank you for using ATM.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
    
}
