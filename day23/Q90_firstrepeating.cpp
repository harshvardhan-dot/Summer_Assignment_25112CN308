#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "enter a string" << endl;
    getline(cin, str);
    unordered_map<char, int> freq;
    for (char c : str)
    {
        freq[c]++;
    }
    for (char c : str)
    {
        if (freq[c] >1)
        {
            cout << "the first  repeating unit is " << c;
            break;
        }
    }

    return 0;
}
