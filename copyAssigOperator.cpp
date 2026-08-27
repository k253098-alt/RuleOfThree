#include <iostream>
using namespace std;

class Student {
private:
    int* marks;
    int size;

public:
    // Constructor
    Student(int s) {
        size = s;
        marks = new int[size];

        for (int i = 0; i < size; i++) {
            marks[i] = 0;
        }
    }

    // Destructor
    ~Student() {
        delete[] marks;
    }

    // Copy assignment operator
    Student& operator=(const Student& other) {

        if (this != &other) {   // Self-assignment check

            // Delete previous data
            delete[] marks;

            // Copy size
            size = other.size;

            // Allocate new array
            marks = new int[size];

            // Copy marks
            for (int i = 0; i < size; i++) {
                marks[i] = other.marks[i];
            }
        }

        return *this;
    }

    // Set marks
    void setMarks() {
        for (int i = 0; i < size; i++) {
            cout << "Enter marks " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Display marks
    void display() {
        cout << "Marks: ";

        for (int i = 0; i < size; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    Student student1(3);
    Student student2(3);

    cout << "Enter marks for Student 1:" << endl;
    student1.setMarks();

    cout << "\nEnter marks for Student 2:" << endl;
    student2.setMarks();

    cout << "\nBefore assignment:" << endl;

    cout << "Student 1: ";
    student1.display();

    cout << "Student 2: ";
    student2.display();

    // Copy assignment
    student2 = student1;

    cout << "\nAfter assignment:" << endl;

    cout << "Student 1: ";
    student1.display();

    cout << "Student 2: ";
    student2.display();

    return 0;
}
