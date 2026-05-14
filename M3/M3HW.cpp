/*
CSC 134
M3HW
Jameson C
05/13/26
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

// Declare functions
void question1();
void question2();
void question3();
void question4();

int main() {
 cout << "Choose Question 1, 2, 3, or 4: ";
 int choice;
 cin >> choice;
 if (1 == choice) {
    question1();
 }
 else if (2 == choice) {
    question2();
 }
 else if (3 == choice) {
    question3();
 }
 else if (4 == choice) {
    question4();
 }
 else {
    cout << "That is not a valid question number!" << endl;
}
    return 0;
}

// Define Fuctions
void question1() {
    cout << "Hello! I am a C++ program!" << endl;
    cout << "Do you like to code? (1 for yes, 2 for no)" << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        cout << "That's great, I hope you continue to learn more about programming!" << endl;
    }
    else if (2 == choice) {
        cout << "That's too bad, I hope you come around to liking programming!" << endl;
    }
    else {
        cout << "If you don't want to answer, or you're not sure, that's fine too!" << endl;
    }
}

void question2() {
double meal_price; 
double tax_rate = 0.075;
double dine_in_tip = 0.15;
double sub_total;    
double tax_amount;
double tip_amount;
double total_price;


    cout << "Welcome valued customer!" << endl;
    cout << "What is the price of your meal? $";
    cin >> meal_price;
    cout << "Will you be dining in today? (1 for yes, 2 for no)" << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        tax_amount = meal_price * tax_rate;
        tip_amount = meal_price * dine_in_tip;
        sub_total = meal_price;
        total_price = meal_price + tax_amount + tip_amount;
        cout << setprecision(2) << fixed;
        cout << "Your Order" << endl << "-------------------------" << endl;
        cout << "Subtotal:\t$" << sub_total << endl;
        cout << "Tax:\t\t$" << tax_amount << endl;
        cout << "Tip:\t\t$" << tip_amount << endl;
        cout << "-------------------------" << endl;
        cout << "Total:\t\t$" << total_price << endl;
        cout << "Thank you for dining in, hope you enjoy your meal!" << endl;
    }
    else if (2 == choice) {
        tax_amount = meal_price * tax_rate;
        total_price = meal_price + tax_amount;
        cout << setprecision(2) << fixed;
        cout << "Your Order" << endl << "-------------------------" << endl;
        cout << "Subtotal:\t$" << sub_total << endl;
        cout << "Tax:\t\t$" << tax_amount << endl;
        cout << "-------------------------" << endl;
        cout << "Total:\t\t$" << total_price << endl;
        cout << "Thank you for your order, hope you enjoy your meal!" << endl;
    }
    else {
        cout << "That is not a valid choice!" << endl;
    }
}

    void question3() {
        cout << "You are a student at a university, and you have an assignment due in 3 days." << endl;
        cout << "Do you: Start working on it now (1) or Procrastinate (2)?" << endl;
        int choice;
        cin >> choice;
        if (1 == choice) {
            cout << "You start working on the assignment, but a friend invites you to go out." << endl;
            cout << "Do you: Go out with your friend (1) or stay and work on the assignment (2)?" << endl;
            int choice2;
            cin >> choice2;
            if (1 == choice2) {
                cout << "You go out with you friend, and don't end up finishing the assignment." << endl;
                cout << "You get a bad grade and fail the class." << endl;
                cout << "GAME OVER!" << endl;
            }
            else if (2 == choice2) {
                cout << "You stay and work on the assignment." << endl;
                cout << "You finish the assignment and pass the class!" << endl;
                cout << "YOU WIN!" << endl;
            }
        }
        else if (2 == choice) {
            cout << "You procrastinate, and end up not finishing the assignment." << endl;
            cout << "You get a bad grade and fail the class." << endl;
            cout << "GAME OVER!" << endl;
        }
    }


    void question4() {
        int seed = time(0);
        srand(seed);
        const int MAX = 10;
        int num1 = rand() % MAX + 1;
        int num2 = rand() % MAX + 1;
        int answer = num1 + num2;

        cout << "Let's do some math!" << endl;
        cout << "What is " << num1 << " + " << num2 << "? ";
        int math_answer;
        cin >> math_answer;
        if (math_answer == answer) {
            cout << "Correct!" << endl;
        }
        else {
            cout << "Incorrect, the correct answer is " << answer << "." << endl;
        }


    }