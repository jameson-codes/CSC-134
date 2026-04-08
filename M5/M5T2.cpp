/*
CSC 134
M5T2
Jameson C
04-8-26
*/

#include <iostream>
using namespace std;

// given 2 numbers, print them on a line
void printResult(int first, int second) {
    cout << first << " squared = " << second << endl;
}

// given a number, return the square
 int square(int number) {
    int result;
    result = number * number;
    return result;
 }

int main() {

    int count = 1;
    int result;
    
    while (count <= 10) {

        result = square(count);
        printResult(count, result);
        count++;
    }
}