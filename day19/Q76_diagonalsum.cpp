#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int a[SIZE][SIZE], sum = 0;

    cout << "Enter matrix:\n";
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            cin >> a[i][j];

    for(int i=0;i<SIZE;i++)
        sum += a[i][i];  // main diagonal

    cout << "Sum of diagonal elements = " << sum << endl;
    return 0;
}
