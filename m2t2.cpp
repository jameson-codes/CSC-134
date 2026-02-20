/*
CSC 134
M2T2 - Receipt Calculator
jamesonc
2/19/26
Goal: A correct looking receipt that handles sales tax.
Assumption: Sales tax is 7.5%
*/

#include <iostream>
using namespace std;

int main() {
    // Declare all variables
    string meal_name = "Pizza";
    int num_meals;
    double meal_price = 8.99;
    double sub_total;
    double tax_rate = 0.075;
    double tip_amount;
    double tax_amount;
    double total_price;

    // Get user input
    cout << "Welcome to JC's Pizzaria." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Tip amount? (min 0)? ";
    cin >> tip_amount;

    // Do the calculation
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate;
    // add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // Present the output
    cout << "YOUR ORDER" << endl << "----------------------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t$" << sub_total << endl;
    cout << "Tip: \t\t$" << tip_amount << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    cout << "----------------------" << endl;
    return 0; // no errors
}