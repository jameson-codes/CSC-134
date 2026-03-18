/*
CSC-134
M3Lab1
Jameson C
03/17/26
*/

#include <iostream>
using namespace std;

int main() {
    // Declare variable
    int choice; 

    // State situation
    cout << "You are playing video games when your mother calls you for dinner." << endl;
    cout << "Do you finish the game (1) or go eat (2)?" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice;

    if (1 == choice) {
        cout << "You finish the game, but your mother is reaching for the belt." << endl;
    }

    else if (2 == choice) {
        cout << "You leave your bros on the game to lose and go eat, but at least your mother is happy." << endl;
    }
    else {
        cout << "That is not a valid choice!" << endl;
    }
}