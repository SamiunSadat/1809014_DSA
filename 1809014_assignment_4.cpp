#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    string department;
    float salary;

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Dept: " << department << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee employees[5];
    int count = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter name, ID, department, and salary for employee " << i + 1 << ": ";
        cin >> employees[count].name >> employees[count].id >> employees[count].department >> employees[count].salary;
        count++;
    }

    int searchID;
    cout << "Enter employee ID to search: ";
    cin >> searchID;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == searchID) {
            employees[i].display();
            found = true;
            break;
        }
    }
    if (!found) cout << "Employee not found!" << endl;

    string searchDept;
    cout << "Enter department to list employees: ";
    cin >> searchDept;
    cout << "Employees in " << searchDept << " department:" << endl;
    for (int i = 0; i < count; i++) {
        if (employees[i].department == searchDept) {
            employees[i].display();
        }
    }

    return 0;
}
