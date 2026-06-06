#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n ;
    }
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int N;
    cout << "enter number of terms" << endl;
    cin>> N ;
    cout << "the fibonacci series upto "<< N<< " terms is" <<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<fibonacci(i)<<endl;
    }
    
    return 0;
}