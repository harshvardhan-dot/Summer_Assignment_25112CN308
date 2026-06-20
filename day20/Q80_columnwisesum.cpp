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

    cout << "Column-wise sums:\n";
    for (int j = 0; j < SIZE; j++)
    {
        int sum = 0;
        for (int i = 0; i < SIZE; i++)
            sum += a[i][j];
        cout << "Column " << j + 1 << " sum = " << sum << endl;
    }
    return 0;
}
