#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << "String without spaces = " << str;
    return 0;
}
