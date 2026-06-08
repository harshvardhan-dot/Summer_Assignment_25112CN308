#include <iostream>
using namespace std;
void pattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n -i ; j >=1; j--)
        {
            cout<< "*";
        }
        cout<< endl;
        
    }

}

int main() {
    int n;
    cout << "enter number of rows" << endl;
    cin >> n ;
    pattern(n);
    return 0;
}