#include<iostream>  
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++) // rows
    {

        for (int j = 1; j <= n - i ; j++) // spaces
        {
            cout << " ";
        }

        for (int j =1; j <=i; j++)
        {
            cout << j;
        }
        for ( int j = i-1; j>=1; j--)
        {
            cout<<j;
        }
        

        cout << endl;
    }
}

int main()
{
    int num;
    cout << "enter number of rows" << endl;
    cin >> num;
    pattern(num);
    return 0;
}