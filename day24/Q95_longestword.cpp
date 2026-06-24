#include <iostream>
#include <sstream>
using namespace std;

string longestWord(string s)
{
    string word, longest;
    stringstream ss(s);
    while (ss >> word)
    {
        if (word.length() > longest.length())
            longest = word;
    }
    return longest;
}

int main()
{
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    cout << "Longest word: " << longestWord(str);
}
