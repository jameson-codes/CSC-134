/*
CSC 134
M6T1
Jameson C
05-07-26
*/

#include <iostream>
using namespace std;

void part1();
void part2();

int main() {
    part1();
    part2();

    return 0;
}

void part1() {
    cout << "Enter the amount of cars that pass each day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int cars_total = 0;
    double cars_avg = 0;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> cars_today;
        cars_total += cars_today;
        count++;
    }
    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;
}