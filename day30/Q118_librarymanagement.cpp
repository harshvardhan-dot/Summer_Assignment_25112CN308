#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    string title;
    string author;
    int id;
};

int main()
{
    vector<Book> library;
    int choice;
    while (true)
    {
        cout << "\n1.Add Book\n2.Display Books\n3.Search by ID\n4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Book b;
            cout << "Enter ID: ";
            cin >> b.id;
            cout << "Enter Title: ";
            cin >> b.title;
            cout << "Enter Author: ";
            cin >> b.author;
            library.push_back(b);
        }
        else if (choice == 2)
        {
            for (auto &b : library)
                cout << b.id << " - " << b.title << " by " << b.author << endl;
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            bool found = false;
            for (auto &b : library)
            {
                if (b.id == id)
                {
                    cout << b.title << " by " << b.author << endl;
                    found = true;
                }
            }
            if (!found)
                cout << "Book not found.\n";
        }
        else
            break;
    }
    return 0;
}
