#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    string temp = s1 + s1; 
    return temp.find(s2) != string::npos;
}

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (isRotation(str1, str2))
        cout << "Strings are rotations.";
    else
        cout << "Strings are not rotations.";
}
