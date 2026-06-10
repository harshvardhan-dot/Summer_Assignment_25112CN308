#include <iostream>
using namespace std;

bool isperfect(int n){
    int sum  =0 ;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            sum += i;
        }
        
    }
   return sum == n; 
}
int main() {
    int num;

    cout << "enter the number"<< endl;
    cin >> num;
    if(isperfect(num))
        cout << "the number is perfect"<<endl;
    
    else
        cout<< "the number is not perfect"<<endl;

    return 0;
}   