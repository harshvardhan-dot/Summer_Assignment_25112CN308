#include <iostream>
using namespace std;

void commonElements(int a[], int b[], int n, int m)
{
    cout << "Common Elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
                cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5}, b[] = {3, 5, 7, 9, 1};
    commonElements(a, b, 5, 5);
    return 0;
}
