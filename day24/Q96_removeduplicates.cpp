#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    int freq[256] = {0}; 
    string result = "";
    for (char c : s)
    {
        if (freq[(int)c] == 0)
        { // not seen before
            result += c;
            freq[(int)c] = 1; 
        }
    }
    return result;
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "String after removing duplicates: " << removeDuplicates(str);
}
