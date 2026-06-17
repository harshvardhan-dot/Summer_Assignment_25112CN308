#include <iostream>
using namespace std;

void intersectionArrays(int a[], int b[], int n, int m) {
    cout << "Intersection: ";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i]==b[j]) cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int a[] = {1,2,3,4}, b[] = {3,4,5,6};
    intersectionArrays(a,b,4,4);
    return 0;
}
