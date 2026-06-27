#include <bits/stdc++.h>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Account a = {101, "Harsh", 5000.0f};
    int choice;
    float amt;

    cout << "Account Number: " << a.accNo << "\n";
    cout << "Account Holder: " << a.name << "\n";
    cout << fixed << setprecision(2);

    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount: ";
            cin >> amt;
            if (amt <= 0)
            {
                cout << "Please enter a positive amount.\n";
            }
            else
            {
                a.balance += amt;
                cout << "Deposited successfully!\n";
            }
            break;
        case 2:
            cout << "Enter amount: ";
            cin >> amt;
            if (amt <= 0)
            {
                cout << "Please enter a positive amount.\n";
            }
            else if (amt > a.balance)
            {
                cout << "Insufficient funds!\n";
            }
            else
            {
                a.balance -= amt;
                cout << "Withdrawal successful!\n";
            }
            break;
        case 3:
            cout << "Available balance: " << a.balance << "\n";
            break;
        case 4:
            cout << "Thank you for using ATM.\n";
            break;
        default:
            cout << "Invalid choice! Please choose between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
    
}
