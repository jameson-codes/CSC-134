/*
CSC 134
M4T1
Jameson C
03-23-26
*/

#include <iostream>
using namespace std;

int main() {
    int count = 1;
    while (count <= 10) {
        cout << "Hello, this is number " << count << endl;
        count++;
    }
    cout << "That is the end of the loop, Goodbye!" << endl;

    cout << "------------------------------" << endl;
    cout << " " << endl;

 // This is the second program
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 15;

    int num = MIN_NUMBER;
    cout << "Number Number Squared" << endl;
    cout << "----------------------" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << num * num << endl;
        num++;
    }
    return 0;
}