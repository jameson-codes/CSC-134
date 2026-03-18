/*
CSC-134
M3T1
Jameson C
03/17/26
Ask the user for the width and length of two rectangles
Find the Area*/

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2;
    double area1, area2;

    //Ask the user for the length and width
    cout << "What's the length for the first rectangle? ";
    cin >> len1;
    cout << "What's the width for the first rectangle? ";
    cin >> wid1;
    cout << "What's the length for the second rectangle? ";
    cin >> len2;
    cout << "What's the width for the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // Print the area
    cout << "The area for the first rectangle is " << area1 << endl;
    cout << "The area for the second rectangle is " << area2 << endl;
}