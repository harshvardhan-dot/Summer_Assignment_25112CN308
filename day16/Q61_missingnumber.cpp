#include <iostream>
#include <vector>
using namespace std;

int findMissingSum(vector<int> &arr, int n)
{
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : arr)
    {
        actualSum += num;
    }
    return expectedSum - actualSum;
}

int main()
{
    vector<int> arr ;
    int n ;
    cout<<"enter number of elements";
    cin >> n ;
    for (int i = 0; i <  n; i++)
    {
        cin >> arr[i];
    }
    

    cout << "Missing number: "
         << findMissingSum(arr, n) << endl;
    return 0;
}
