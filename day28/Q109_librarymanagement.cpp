#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
};

int main()
{
    vector<Book> library;
    int choice;
    do
    {
        cout << "\n1. Add Book\n2. Display Books\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Book b;
            cout << "Enter id, title, author: ";
            cin >> b.id >> b.title >> b.author;
            library.push_back(b);
        }
        else if (choice == 2)
        {
            for (auto &b : library)
                cout << b.id << " " << b.title << " " << b.author << endl;
        }
    } while (choice != 3);
    return 0;
}
