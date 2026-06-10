#include <iostream>
using namespace std;
int counteven(int arr[],int n){
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            even ++ ;
        }
        
    }
    return even ;
    
}
int countodd(int arr[],int n ){
    return n - counteven(arr ,n);
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
    cout<<"the number of even elements are "<<counteven(arr,n)<<endl;
    cout<< "the number of odd elemnts are "<<countodd(arr,n)<<endl;
   
    return 0;
}