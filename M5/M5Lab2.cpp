/*
CSC 134
M5Lab2
Jameson C
04-12-26
*/

#include <iostream>
using namespace std;

int getLength();
int getWidth();
int getArea(int l, int w);
void displayData(int l, int w, int a);

int main() {

    int    length, 
           width,
           area;
    
    length = getLength();

    width = getWidth();

    area = getArea(length, width);

    cout << "__________________________________________" << endl;
    displayData(length, width, area);
}

int getLength() {
    int length;
    cout << "What is the length of the rectangle? ";
    cin >> length;
    return length;
}

int getWidth() {
    int width;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    return width;
}

int getArea(int l, int w) {
    int area = l * w;
    cout << "The area of the rectangle is: " << area << endl;
    return area;
}

void displayData(int l, int w, int a) {
    cout << "The length of the rectangle is: " << l << endl;
    cout << "The width of the rectangle is: " << w << endl;
    cout << "The area of the rectangle is: " << a << endl;
}