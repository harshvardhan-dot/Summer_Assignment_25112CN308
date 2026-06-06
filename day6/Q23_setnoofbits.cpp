#include <iostream>
using namespace std;
int countsetbits(int n ){
    int count = 0 ;
    while(n>0){
        if(n&1){
            count ++ ;
        }
        n = n>>1;
    }
    return count ;

}

int main() {
    int num;
    cout << "enter number" << endl;
    cin>> num ;
    cout <<"the no of set bits are "<< countsetbits(num);

    return 0;
}