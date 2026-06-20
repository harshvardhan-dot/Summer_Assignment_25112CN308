#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int a[SIZE][SIZE];
    bool symmetric = true;

    cout << "Enter matrix:\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> a[i][j];

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }

    if (symmetric)
        cout << "Matrix is Symmetric\n";
    else
        cout << "Matrix is NOT Symmetric\n";

    return 0;
}

