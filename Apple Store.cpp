/*
CSC 134
M1LAB
Jameson Carrington
2/3/2026
*/

//magic words
#include <iostream>
using namespace std;

int main() {
    string name = "Jameson Carrington";
    int apples = 100;
    double pricePerApple = 0.25;

    
    double totalPrice = (double) apples * pricePerApple;

    
    cout << "Welcome to " << name;
    cout << " 's apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
    
    
    cout << "If you want them all, that will be $" << totalPrice << endl;
}