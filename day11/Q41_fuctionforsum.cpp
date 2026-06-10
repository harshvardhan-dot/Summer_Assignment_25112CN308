#include <iostream>
using namespace std;
int sum(int a ,int b){
    int sum = a+b;
    return sum;

}

int main() {
    int a,b;
    cout << "enter first number" << endl;
    cin >>a;
    cout<< "enter second number "<<endl;
    cin>> b ;
    cout<<sum(a,b);


    return 0;
}