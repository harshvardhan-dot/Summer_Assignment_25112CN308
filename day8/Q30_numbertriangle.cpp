#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter number of rows" << endl;
    cin >> n;
    pattern(n);
    return 0;
}