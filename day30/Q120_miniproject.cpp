#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

struct Book
{
    int id;
    string title;
    string author;
};

vector<Student> students;
vector<Book> books;

void addStudent()
{
    Student s;
    cout << "Enter Roll: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Marks: ";
    cin >> s.marks;
    students.push_back(s);
}

void displayStudents()
{
    for (auto &s : students)
        cout << s.roll << " - " << s.name << " - " << s.marks << endl;
}

void addBook()
{
    Book b;
    cout << "Enter ID: ";
    cin >> b.id;
    cout << "Enter Title: ";
    cin >> b.title;
    cout << "Enter Author: ";
    cin >> b.author;
    books.push_back(b);
}

void displayBooks()
{
    for (auto &b : books)
        cout << b.id << " - " << b.title << " by " << b.author << endl;
}

int main()
{
    int choice;
    while (true)
    {
        cout << "\n1.Add Student\n2.Display Students\n3.Add Book\n4.Display Books\n5.Exit\nChoice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            addBook();
            break;
        case 4:
            displayBooks();
            break;
        default:
            return 0;
        }
    }
}
