#include <iostream>
using namespace std;
int sumarray(int arr [], int n){
    int sum =0 ;
    for (int i = 0; i <n; i++)
    {
    sum +=arr[i];
    
    }
    return sum ;
    
}
double average(int arr[],int n){
    double average = (double)sumarray(arr,n)/n ;
    return average;
}

int main() {
    int n;
    cout << "enter the number of elements" << endl;
    cin >> n ;
    int arr[n];
    cout <<"enter "<<n<<"elements"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>> arr[i];
    }
    cout<< "the sum of array is  " <<  sumarray(arr,n)<<endl;
    cout<<"the average of elements is "<< average(arr,n)<<endl;
    return 0;
}