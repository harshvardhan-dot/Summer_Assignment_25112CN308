#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    vector<Employee> emp;
    int choice;
    while (true)
    {
        cout << "\n1.Add Employee\n2.Display Employees\n3.Search by ID\n4.Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Employee e;
            cout << "Enter ID: ";
            cin >> e.id;
            cout << "Enter Name: ";
            cin >> e.name;
            cout << "Enter Salary: ";
            cin >> e.salary;
            emp.push_back(e);
        }
        else if (choice == 2)
        {
            for (auto &e : emp)
                cout << e.id << " - " << e.name << " - " << e.salary << endl;
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            bool found = false;
            for (auto &e : emp)
            {
                if (e.id == id)
                {
                    cout << e.name << " - " << e.salary << endl;
                    found = true;
                }
            }
            if (!found)
                cout << "Employee not found.\n";
        }
        else
            break;
    }
    return 0;
}
