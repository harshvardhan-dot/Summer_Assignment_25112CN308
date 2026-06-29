#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int roll;
    float marks;
};

int main()
{
    Student s[50];
    int n, choice;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter roll: ";
        cin >> s[i].roll;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    while (true)
    {
        cout << "\n1.Display All\n2.Search by Roll\n3.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            for (int i = 0; i < n; i++)
                cout << s[i].roll << " - " << s[i].name << " - " << s[i].marks << endl;
        }
        else if (choice == 2)
        {
            int r;
            cout << "Enter roll: ";
            cin >> r;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == r)
                {
                    cout << s[i].name << " - " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Not found.\n";
        }
        else
            break;
    }
    return 0;

    
}
