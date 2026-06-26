#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    int m1, m2, m3;
};

int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "\n1. Add Student\n2. Generate Marksheet\n3. Exit\nChoice: ";
        cin >> choice;
        if(choice == 1) {
            Student s;
            cout << "Enter roll, name, marks in 3 subjects: ";
            cin >> s.roll >> s.name >> s.m1 >> s.m2 >> s.m3;
            students.push_back(s);
        } else if(choice == 2) {
            for(auto &s : students) {
                int total = s.m1 + s.m2 + s.m3;
                float avg = total / 3.0;
                cout << "\nRoll: " << s.roll << " Name: " << s.name;
                cout << "\nMarks: " << s.m1 << " " << s.m2 << " " << s.m3;
                cout << "\nTotal: " << total << " Average: " << avg;
                cout << "\nResult: " << (avg >= 40 ? "Pass" : "Fail") << endl;
            }
        }
    } while(choice != 3);
    return 0;
}
