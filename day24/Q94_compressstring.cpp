#include <iostream>
#include <string>
using namespace std;

string compressString(string s)
{
    string result = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        result += s[i] + to_string(count);
    }
    return result;
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Compressed string: " << compressString(str);
}
