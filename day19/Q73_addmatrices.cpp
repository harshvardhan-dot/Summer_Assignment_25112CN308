#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> b[i][j];

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
