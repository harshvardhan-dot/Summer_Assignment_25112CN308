#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int original = num;
    int n = 0;
    int temp = num;

    // Count digits
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }

    temp = num;
    int sum = 0;

    // Calculate sum of digits^n
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;

    return 0;
}
