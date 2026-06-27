#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    int id;
    string name;
    float basic, hra, da;
};

int main()
{
    vector<Employee> employees;
    int choice;
    do
    {
        cout << "\n1. Add Employee\n2. Calculate Salary\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1)
        {
            Employee e;
            cout << "Enter id, name, basic, hra, da: ";
            cin >> e.id >> e.name >> e.basic >> e.hra >> e.da;
            employees.push_back(e);
        }
        else if (choice == 2)
        {
            for (auto &e : employees)
            {
                float total = e.basic + e.hra + e.da;
                cout << e.id  << " " << e.name << " Salary: " << total << endl;
            }
        }
    } while (choice != 3);
    return 0;
}
