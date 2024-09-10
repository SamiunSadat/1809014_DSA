#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int grades[5];

    float calculateAverageGrade()
     {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }
        return sum / 5.0;
    }


    float getHighestGrade() {
        int highest = grades[0];
        for (int i = 1; i < 5; i++)
            {
            if (grades[i] > highest)
             {
                highest = grades[i];
            }
        }
        return highest;
    }


    void displayStudentInfo()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grades: ";
        for (int i = 0; i < 5; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
        cout << "Average Grade: " << calculateAverageGrade() << endl;
        cout << "Highest Grade: " << getHighestGrade() << endl;
    }
};

int main() {
    Student student1;

    cout << "Enter student's name: ";
    getline(cin, student1.name);

    cout << "Enter roll number: ";
    cin >> student1.rollNumber;


    cout << "Enter 5 grades: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> student1.grades[i];
    }

    student1.displayStudentInfo();

    return 0;
}
