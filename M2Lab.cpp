/*
CSC-134
M2 Lab
carringtonj
03/09/26
This program is going to calculate volume, cost, customer charge,
and volume of a crate, with the dimensions of the crate given through
user input.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.55;

    // Variables
    double length, // Length of crate
           width,  // Width of crate
           height, // Height of crate
           volume, // Volume of crate
           cost,   // Cost to make crate
           charge, // Amount charged
           profit; // Profit made from crate

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height.
    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Caluculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The Volume of the crate is: ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}