#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names = {"Harsh", "Vaidik", "Ansh", "Rohit"};
    sort(names.begin(), names.end());

    cout << "Sorted names:\n";
    for(string n : names) cout << n << endl;
    return 0;
}
