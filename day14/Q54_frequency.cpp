#include <iostream>
using namespace std;
int freq(int arr [],int n ,int key){
    int count  = 0;
    for (int i = 0; i < n; i++)
    {
        if(key == arr[i]){
            count++;
        }
    }
    return count;
    
}
int main()
{
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to find frequency: ";
    cin >> key;

    cout << "Frequency of " << key << " = " << freq(arr, n, key) << endl;
}