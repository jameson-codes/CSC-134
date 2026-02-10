// CSC 134
// M2T1 - Product Sales
// Jameson Carrington
// 2/10/26
// We're going to make the simplest possible
// "checkout" machine.
#include <iostream>
#include <iomanip> // For the two decimal places.
using namespace std;


int main()  {

    //Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "watermelon"; // change to whatever you like
    int amount_purchased;
    double cost_each = 3.00;
    double total_cost;


    // Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase
    cout << "How many " << product << " do you want to buy? ";
    cin >> amount_purchased;

    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;
    
    // Give the result
    cout << "for " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors
}