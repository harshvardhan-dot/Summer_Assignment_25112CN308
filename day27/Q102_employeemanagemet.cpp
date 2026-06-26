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
    vector<Employee> employees;
    int choice;
    do
    {
        cout << "\n1. Add Employee\n2. Display Employees\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Employee e;
            cout << "Enter id, name, salary: ";
            cin >> e.id >> e.name >> e.salary;
            employees.push_back(e);
        }
        else if (choice == 2)
        {
            for (auto &e : employees)
                cout << e.id << " " << e.name << " " << e.salary << endl;
        }
    } while (choice != 3);
    return 0;
}
