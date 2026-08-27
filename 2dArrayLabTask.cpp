#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 4;
    const int DAYS = 5;

    // Dynamic allocation of 2D array
    int** attendance = new int*[STUDENTS];

    for (int i = 0; i < STUDENTS; i++) {
        attendance[i] = new int[DAYS];
    }

    // Input attendance
    cout << "Enter attendance for 4 students for 5 days:\n";
    cout << "Enter 1 for Present and 0 for Absent.\n\n";

    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << i + 1 << ":\n";

        for (int j = 0; j < DAYS; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> attendance[i][j];
        }
    }

    // Display attendance record
    cout << "\nComplete Attendance Record:\n";

    cout << "Student\t";
    for (int j = 0; j < DAYS; j++) {
        cout << "Day" << j + 1 << "\t";
    }
    cout << endl;

    for (int i = 0; i < STUDENTS; i++) {
        cout << "S" << i + 1 << "\t";

        for (int j = 0; j < DAYS; j++) {
            cout << attendance[i][j] << "\t";
        }

        cout << endl;
    }

    // Calculate present days
    cout << "\nNumber of days each student was present:\n";

    for (int i = 0; i < STUDENTS; i++) {
        int presentDays = 0;

        for (int j = 0; j < DAYS; j++) {
            if (attendance[i][j] == 1) {
                presentDays++;
            }
        }

        cout << "Student " << i + 1
             << " was present for "
             << presentDays << " days." << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < STUDENTS; i++) {
        delete[] attendance[i];
    }

    delete[] attendance;

    return 0;
}
