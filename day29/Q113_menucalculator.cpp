#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;
    while (true)
    {
        cout << "\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\nChoice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            switch (choice)
            {
            case 1:
                cout << "Sum = " << a + b << endl;
                break;
            case 2:
                cout << "Difference = " << a - b << endl;
                break;
            case 3:
                cout << "Product = " << a * b << endl;
                break;
            case 4:
                cout << "Quotient = " << (b != 0 ? a / b : 0) << endl;
                break;
            }
        }
        else
            break;
    }
    return 0;
}
