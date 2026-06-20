#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int a[SIZE][SIZE], transpose[SIZE][SIZE];

    cout << "Enter matrix:\n";
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            cin >> a[i][j];

    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            transpose[j][i] = a[i][j];

    cout << "Transpose Matrix:\n";
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}
