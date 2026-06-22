#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char,int> freq;
    for(char c : str) {
        if(c != ' ')  
            freq[c]++;
    }

    cout << "Character frequencies:\n";
    for(auto &p : freq) {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}
