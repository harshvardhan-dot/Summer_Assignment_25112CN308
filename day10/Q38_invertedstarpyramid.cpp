#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = n; i >=0; i--) // rows
    {

        for (int j = 0; j <= n - i - 1; j++) // spaces
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) // stars
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int num;
    cout << "enter number of rows" << endl;
    cin >> num;
    pattern(num);
    return 0;
}