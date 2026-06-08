#include <iostream>
using namespace std;
void pattern(int n)
{

    for (int i = 0; i < n; i++) // rows
    {

        for (int j = 0; j <= n - i -1; j++) // spaces
        {
            cout << " ";
        }

        for (char ch = 'A'; ch <=  'A' + i; ch++)
        {
            cout << ch;
        }
        for (char ch  = 'A' + i  -1; ch>= 'A'; ch--)
        {
            cout << ch;
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