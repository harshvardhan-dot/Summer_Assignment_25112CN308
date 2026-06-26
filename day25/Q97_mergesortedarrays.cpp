#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int n = 4, m = 4;
    vector<int> merged;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(a[i] < b[j]) merged.push_back(a[i++]);
        else merged.push_back(b[j++]);
    }
    while(i < n) merged.push_back(a[i++]);
    while(j < m) merged.push_back(b[j++]);

    for(int x : merged) cout << x << " ";
    return 0;
}
