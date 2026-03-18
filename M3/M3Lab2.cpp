/* 
CSC-134
M3Lab2
Jameson C
03/17/26
Convert Numerical Grades into Letter Grades
*/

#include <iostream>
using namespace std;

int main () {
    // Variable
    double grade;
    char letterGrade;
    int A, B, C, D, F;
    A = 90-100;
    B = 80-89;
    C = 70-79;
    D = 60-69;
    F = 0-59;

    // Ask the user for the grade
    cout << "What grade did you get? ";
    cin >> grade;

    // Convert the grade to a letter grade
    if (grade >= 90) {
        letterGrade = 'A';
        cout <<  "Congratualtions! You got an " << letterGrade << "!"  << endl;
    } 
    else if (grade >= 80) {
        letterGrade = 'B';
       cout << "Nice! you got a " << letterGrade << "!" << endl;
    } 
    else if (grade >= 70) {
        letterGrade = 'C';
        cout << "You got a " << letterGrade << "! Make sure to work hard to bring it up to a B!" << endl;
    } 
    else if (grade >= 60) {
        letterGrade = 'D';
        cout << "You got a " << letterGrade <<  "! Keep working hard to bring it up!" << endl;
    } 
    else if (grade >= 59) {
        letterGrade = 'F';
        cout << "Oof, a " << letterGrade << "! Tough luck! Be sure to ask any questions if you have any!" << endl;
    }
}