#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100], rev[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    cout << "Reversed string = " << rev;
    return 0;
}
