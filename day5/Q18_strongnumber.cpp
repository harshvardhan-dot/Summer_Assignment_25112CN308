#include <iostream>
using namespace std;

int factorial(int n){
    int fact =1 ; 
    if (n == 0){
        fact = 1;
    }
    else{
    for (int i = 0; i < n; i++)
    {
        fact *= i;
        
    }
}
return fact ;
}
int main() {
    int num ,digit,sum =0 ;
    cout << "enter the number " << endl;
    cin >> num ;
    while ( num != 0)
    {
        digit = num%10;
        sum += factorial(digit);
        num =num/10;
    }
    if(sum == num){
        cout << "the number is strong number";

    }
    
    return 0;
}