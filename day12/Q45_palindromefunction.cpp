#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    return n == reverseNum(n); 
}

int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is Palindrome" << endl;
    else
        cout << num << " is NOT Palindrome" << endl;
    return 0;
}
