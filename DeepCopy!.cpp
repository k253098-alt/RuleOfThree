#include <iostream>

using namespace std;

class Student {
public:
    int* marks;
    int size;

    // Constructor
    Student(int s) {
        size = s;
        marks = new int[size];

        for (int i = 0; i < size; i++) {
            marks[i] = 0;
        }
    }

    // Deep Copy Constructor
    Student(const Student& other) {
        size = other.size;
        marks = new int[size];

        for (int i = 0; i < size; i++) {
            marks[i] = other.marks[i];
        }
    }

    // Destructor
    ~Student() {
        delete[] marks;
    }
};

int main() {

    Student s1(30);

    s1.marks[0] = 90;
    s1.marks[1] = 80;
    s1.marks[2] = 70;

    // Deep copy of s1 into s2
    Student s2 = s1;

    // Change s2
    s2.marks[0] = 100;

    cout << "s1 marks:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << s1.marks[i] << endl;
    }

    cout << "\ns2 marks:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << s2.marks[i] << endl;
    }

    return 0;
}
