#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char maxOccurringChar(string s)
{
    int freq[256] = {0};
    for (char c : s)
        freq[(int)c]++; 
    auto it = max_element(freq, freq + 256);
    return (char)(it - freq); 
}

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Maximum occurring character: " << maxOccurringChar(str);
}
