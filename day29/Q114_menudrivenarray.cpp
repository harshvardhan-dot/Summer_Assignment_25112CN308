#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;
    cout << "Enter size of array: "; cin >> n;
    cout << "Enter elements: ";
    for (int i=0;i<n;i++) cin >> arr[i];

    while (true) {
        cout << "\n1.Display\n2.Sum\n3.Max\n4.Min\n5.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            for (int i=0;i<n;i++) cout << arr[i] << " ";
            cout << endl;
        } else if (choice == 2) {
            int sum=0; for(int i=0;i<n;i++) sum+=arr[i];
            cout << "Sum = " << sum << endl;
        } else if (choice == 3) {
            int mx=arr[0]; for(int i=1;i<n;i++) mx=max(mx,arr[i]);
            cout << "Max = " << mx << endl;
        } else if (choice == 4) {
            int mn=arr[0]; for(int i=1;i<n;i++) mn=min(mn,arr[i]);
            cout << "Min = " << mn << endl;
        } else break;
    }
    return 0;
    
}
