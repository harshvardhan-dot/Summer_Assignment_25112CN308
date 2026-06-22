#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome";
    return 0;
}
