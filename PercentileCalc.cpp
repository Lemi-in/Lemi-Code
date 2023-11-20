
// This program calculates percentile mark of student score in 8th grade.
#include<iostream>
using namespace std;

int main() {
    // Input variables
    int studentScore, totalStudents, studentRank;

    // Get input from the user
    cout << "Enter the student's score: ";
    cin >> studentScore;

    cout << "Enter the total number of students: ";
    cin >> totalStudents;

    cout << "Enter the student's rank: ";
    cin >> studentRank;

    // Calculate percentile rank
    double percentileRank = (static_cast<double>(totalStudents - studentRank + 1) / totalStudents) * 100;

    // Display the result
    cout << "The student's percentile rank is: " << percentileRank << "%" << endl;

    return 0;
}

