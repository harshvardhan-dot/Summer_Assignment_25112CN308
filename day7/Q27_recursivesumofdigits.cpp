#include <iostream>
using namespace std;
int sumofdigits(int n){
    if(n==0){
        return 0 ;
    }
    return (n%10)+ sumofdigits(n/10);
}

int main() {
    int num ;
    cout << "enter the number" << endl;
    cin>> num ;
    cout<< "the sum of digits is "<< endl;
    cout<< sumofdigits(num);

    return 0;
}