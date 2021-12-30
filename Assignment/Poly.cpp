/*Clay Garrison
CSCI 1010
Section 001
Assignment 8-2
Create a function to calculate the value of a polynomial with a value given by the user.*/
#include<iostream>

using namespace std;

//Function to calculate the value of the polynomial.
double poly(double x)
{
    double value ;
    value = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) -(x * x) + (7 * x) - 6 ;
    
    return value ;
}
int main()
{

    double x ;
    cout << "Enter a value for x: " ;
    cin >> x ;

    cout << endl << "The value of the polynomial with " << x << " plugged in is: " << poly(x) << endl;
}