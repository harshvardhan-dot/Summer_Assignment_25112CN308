#include <bits/stdc++.h>
using namespace std;

int freq(vector<int>&arr, int val){
    return count(arr.begin(),arr.end(),val);
}

int main() {
    int n ;
    int val;
    cout<<"enter the number of elements"<< endl;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    cout << "enter the element to find" << endl;
    cin >> val;
    cout<<"the frequency is "<< freq(arr,val);
    
    return 0;
}