// example 1: Convert Length
// Converting from inches to cm.

// Header file
#include <iostream>

using namespace std;

// Name constants
const double cm_per_inch = 2.54;
const int inch_per_foot = 12;

int main() {
    // declare varibles
    int feet, inches;
    int total_inches;
    double centimeter;
    cout << "Enter two integars , one for feet and one for inches: ";
    cin>> feet>> inches;
    cout << endl;
    total_inches = inches + inch_per_foot * feet;
    centimeter = cm_per_inch *total_inches;
    cout <<" the number of centimeters = "
         << centimeter<<endl;
     return 0;

    return 0;
}