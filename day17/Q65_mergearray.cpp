#include <iostream>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m)
{
    int c[n + m], k = 0;
    for (int i = 0; i < n; i++)
        c[k++] = a[i];
    for (int j = 0; j < m; j++)
        c[k++] = b[j];

    cout << "Merged Array: ";
    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, b[] = {6, 7, 8, 9, 10};
    mergeArrays(a, b, 5, 5);
    return 0;
}
