#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int a[SIZE][SIZE];

    cout << "Enter matrix:\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            cin >> a[i][j];

    cout << "Row-wise sums:\n";
    for (int i = 0; i < SIZE; i++)
    {
        int sum = 0;
        for (int j = 0; j < SIZE; j++)
            sum += a[i][j];
        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }
    return 0;
}
