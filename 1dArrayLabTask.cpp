#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int marks[SIZE];
    int total = 0;
    int highest;

    // Input marks
    cout << "Enter marks of 10 students:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display marks and calculate total
    cout << "\nMarks of all students:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
        total += marks[i];
    }

    // Calculate average
//    double average = static_cast<double>(total) / SIZE;
      double average = (double) total/ SIZE;

    // Find highest mark
    highest = marks[0];
    for (int i = 1; i < SIZE; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    // Display results
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Highest Marks = " << highest << endl;

    return 0;
}
