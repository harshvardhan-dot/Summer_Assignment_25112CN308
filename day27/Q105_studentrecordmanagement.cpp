#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    vector<Student> students;
    int choice;
    do
    {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Student s;
            cout << "Enter roll, name, marks: ";
            cin >> s.roll >> s.name >> s.marks;
            students.push_back(s);
        }
        else if (choice == 2)
        {
            for (auto &s : students)
                cout << s.roll << " " << s.name << " " << s.marks << endl;
        }
    } while (choice != 3);
    return 0;
    
}
