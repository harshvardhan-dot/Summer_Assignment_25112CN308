#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int choice;
    cout << "Enter a string: ";
    getline(cin, s);

    while (true)
    {
        cout << "\n1.Length\n2.Reverse\n3.Uppercase\n4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
            cout << "Length = " << s.size() << endl;
        else if (choice == 2)
        {
            string rev = s;
            reverse(rev.begin(), rev.end());
            cout << "Reversed = " << rev << endl;
        }
        else if (choice == 3)
        {
            string up = s;
            for (char &c : up)
                c = toupper(c);
            cout << "Uppercase = " << up << endl;
        }
        else
            break;
    }
    return 0;
}
