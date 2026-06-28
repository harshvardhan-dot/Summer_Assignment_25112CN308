#include <iostream>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    vector<Contact> contacts;
    int choice;
    while (true) {
        cout << "\n1. Add Contact\n2. Display Contacts\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            Contact c;
            cout << "Enter name: "; cin >> c.name;
            cout << "Enter phone: "; cin >> c.phone;
            contacts.push_back(c);
        } else if (choice == 2) {
            for (auto &c : contacts)
                cout << c.name << " - " << c.phone << endl;
        } else break;
    }
    return 0;
}
