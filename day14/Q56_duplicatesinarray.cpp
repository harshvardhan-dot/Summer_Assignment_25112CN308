#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n)
{
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break; // avoid multiple prints
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findDuplicates(arr, n);
}
