/*
CSC-134
M3T2
Jameson C
03/17/26
*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    cout << "Let's get rolling!" << endl;
    int seed = time(0);
    /* cout << "Seed: " << seed << endl;
    "What's your lucky number? ";
    cin >> seed; */
    srand(seed);

    const int MAX = 6;
    int roll1, roll2, total;
    roll1 = rand() % MAX + 1;
    cout << "The number you rolled is " << roll1 << endl;

    roll2 = rand() % MAX + 1;
    cout << "The number you rolled is " << roll2 << endl;

    total = roll1 + roll2;
    cout << "The total is " << total << endl;

    /* Let's play craps!
    7 and 11 = win
    2 and 12 = lose
    */
   if (total ==7) {
    cout << "Lucky seven! Winner! " << endl;
   }
   else if (total == 11) {
    cout << "Nice roll! Winner! " << endl;
   }
   else if (total == 2) {
    cout << "Unlucky! Snake Eyes!" << endl;
   }
   else if (total == 12) {
    cout << "Boxcars! Unlucky!" << endl;
   }
   else {
    cout << "Your total is " << total << ", we'll get to that sometime later." << endl;
   }
}