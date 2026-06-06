#include <iostream>
using namespace std;

int main() {
    int dec  = 0 ;
    int base =1 ,rem;
    int bin;

    cout << "ENTER THE BINRY NUMBER" << endl;
    cin >> bin ;
    while(bin>0){
        rem  = bin %10;
        dec = dec +rem*base ;
        base = base*2;
        bin = bin /10; 

    }
    cout<< "the decimal equivalent is "<<endl;
    cout<<dec;
    
    return 0;
}