#include <iostream>
using namespace std;

int main() {
    int x , n ;
    long long result =1;

    cout << "enter the base (x)" << endl;
    cin >> x;
    cout<< "enter the exponent(n)"<<endl;
    cin>> n ;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    cout<< result ;
    
    return 0;
}