#include <iostream>
using namespace std;
int max(int arr[],int n ){
    int max  = arr[0];
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    return max;
    
}
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter " << n << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"the maximum is "<<max(arr,n)<<endl;
    cout<<"the minimum is "<<min(arr,n)<<endl;

    return 0 ;
    
}