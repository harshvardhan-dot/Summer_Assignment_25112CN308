#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    int qty;
};

int main() {
    vector<Item> inventory;
    int choice;
    while (true) {
        cout << "\n1.Add Item\n2.Display Inventory\n3.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            Item it;
            cout << "Enter item name: "; cin >> it.name;
            cout << "Enter quantity: "; cin >> it.qty;
            inventory.push_back(it);
        } else if (choice == 2) {
            for (auto &it : inventory)
                cout << it.name << " - " << it.qty << endl;
        } else break;
    }
    return 0;
}
