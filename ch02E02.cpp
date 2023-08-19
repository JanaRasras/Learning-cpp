// example 2: Make Change
// Converting from cents to pennis.

// Header file
#include <iostream>

using namespace std;

// Name constants
const int half_dollar = 50;
const int quarter = 25; 
const int dime = 10;
const int nickle = 5;

int main() {
    // declare varibles
    int change;
    
    cout << "Enter change in cents: ";
    cin>> change;
    cout << endl;
    
     cout<<"the change you enterd in half dollars is " << change/ half_dollar;
     cout << endl;
     
     change = change%half_dollar; 
     
     cout<<"the change you enterd in quartersis " << change/ quarter;
     cout << endl;
     
     change = change % quarter; 
     
     cout<<"the change you enterd in dimes is " << change/ dime;
     cout << endl;
    
    change = change % dime; 
     
     cout<<"the change you enterd in nickles is " << change/ nickle;
     cout << endl;
     
    change = change % nickle; 
     
     cout<<"the change you enterd in pennis is " << change;
     cout << endl;

    return 0;
}