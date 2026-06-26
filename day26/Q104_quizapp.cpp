#include <iostream>
using namespace std;

int main()
{
    int score = 0, ans;

    cout << "Q1: Capital of India?\n1) Delhi  2) Mumbai\n";
    cin >> ans;
    if (ans == 1)
        score++;

    cout << "Q2: 2 + 2 = ?\n1) 3  2) 4\n";
    cin >> ans;
    if (ans == 2)
        score++;

    cout << "Q3: Largest planet?\n1) Jupiter  2) Earth\n";
    cin >> ans;
    if (ans == 1)
        score++;

    cout << "Your final score: " << score << "/3\n";
    return 0;
}
