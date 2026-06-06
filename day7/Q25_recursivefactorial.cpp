#include <iostream>
using namespace std;
int factorial(int n){
    int fact ;
    if(n==0){
        return fact = 1;
    }
    else{
        return fact = n*factorial(n-1);
    }
}

int main() {
    int num;
    cout << "enter the number" << endl;
    cin >> num ;
    cout<<"the factorial of "<<num<<" is "<<endl;
    cout<< factorial(num);
    return 0;
}