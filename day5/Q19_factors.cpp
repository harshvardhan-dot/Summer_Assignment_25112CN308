#include <iostream>
using namespace std;
void factor(int n){
    for (int i = 1; i <= n; i++)
    {
      if (n%i == 0)
      {
        cout << i <<endl;
      }
      
    }
    
}

int main() {
    int num;
    cout <<"enter the number " << endl;
    cin >> num ;
    cout<< "the factors are" <<endl;
    factor(num);
    return 0;
}