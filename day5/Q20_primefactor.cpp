#include <iostream>
using namespace std;
bool isprime(int n){
    if (n<=1){
        return false;
    }
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true ;
}

int primefactor(int n){
    int factor ;
    for (int i = n; i>= 1; i--)
    {
        if(n%i == 0 && isprime(i)){
            factor = i;
            break;
            
        }
        
    }
    return factor ; 
    

}

int main() {
    int num ;
    cout << "enter the number" << endl;
    cin >> num ;
    cout<<"the greatest prime factor of "<<num<< "is"<<endl;
    cout << primefactor(num);
    return 0;
}