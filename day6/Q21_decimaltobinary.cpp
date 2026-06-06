#include <iostream>
using namespace std;

int main() {
    int dec ;
    int bin[32];
    int i = 0 ;
    cout << "enter the number " << endl;
    cin >> dec ;
    while(dec>0){
        bin[i]= dec%2;
        dec = dec/2;
        i++;
    }
    cout<< "the binary equivalent is "<<endl;
    for (int  j = i-1 ; j>=0; j--)
    {
        cout<< bin[j];

    }
    cout<<endl;

    return 0;
}  