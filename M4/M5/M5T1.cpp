/*
CSC 134
M5T1
Jameson C
04-8-26
*/

#include <iostream>
using namespace std;

// Function Prototypes
void say_hello();
int give_the_answer();
int double_a_number(int num);

// Function Definitions
int main() {
    
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;
    int twotimes = double_a_number(9);
    cout << "Here's another number: " << twotimes << endl;
    return 0;
}

void say_hello() {
    cout << "Hi from say_hello " << endl;
    return;
}
int give_the_answer() {
    return 32;
}
int double_a_number(int num) {
    int new_num = num *2;
    return new_num;
}