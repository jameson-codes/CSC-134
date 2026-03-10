/*
CSC-134
M2HW Q1
carringtonj
03/09/26
This program will simulate banking transacations.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    double balance = 2000.00,
            deposit,
            withdrawal;

    // Account Information
    double account_number = 987654321;
    string account_name = "JamesonC";

    // Decimal Places
    cout << setprecision(2) << fixed << showpoint;

    // Ask the user a series of questions
    cout << "Welcome to the bank of America!" << endl;
    cout << "What is your name? ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    cout << "Your current balance is: $" << balance << endl;
    cout << "How much would you like to deposit into your account? " << endl;
    cin >> deposit;
    cout << "How much would you like to withdraw from your account? " << endl;
    cin >> withdrawal;

    // Calculate the new balance
    balance = balance + deposit - withdrawal;

    // Display information
    cout << "Account Name: " << account_name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Your new balance is: $" << balance << endl;
    cout << "Thank you for banking with us!" << endl;
}
