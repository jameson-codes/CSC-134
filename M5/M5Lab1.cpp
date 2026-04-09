/*
CSC 134
M5Lab1
Jameson C
04-8-26
*/

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_window();

int main() {
    cout << "M5Lab1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. Try the window" << endl;
  cout << "5. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    choice_window();
  } else if (5 == choice) {
    cout << "Okay, quitting game" << endl;
  } else {
    cout << "That choice is invalid, please reenter another choice" << endl;
    cin.ignore();
    main_menu();
  }
}

// Function Definitions
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Sneak around back" << endl;
  cout << "2. Try a window" << endl;
  cout << "3. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_window();
  } else if (3 == choice) {
    choice_go_home();
  } else {
    cout << "That choice is invalid, please renter another choice" << endl;
    cin.ignore();
    choice_front_door();
  }
}

void choice_back_door() {
    cout << "You sneak around the back." << endl;
    cout << "You see a door, but the doorknob is missing. Do you:" << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Try the window" << endl;
    cout << "3. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_front_door();
    } else if (2 == choice) {
        choice_window();
    } else if (3 == choice) {
        choice_go_home();
    } else {
        cout << "That choice is invalid, please renter another choice" << endl;
        cin.ignore();
        choice_back_door();
    }
}

void choice_go_home() {
    cout << "You come to your senses and realize it's not worth it." << endl;
    cout << "You turn around and begin your journey home." << endl;
}

void choice_window() {
    cout << "You try the window." << endl;
    cout << "The window won't budge, it's too old." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_front_door();
    } else if (2 == choice) {
        choice_back_door();
    } else if (3 == choice) {
        choice_go_home();
    } else {
        cout << "That choice is invalid, please renter another choice" << endl;
        cin.ignore();
        choice_window();
}
}