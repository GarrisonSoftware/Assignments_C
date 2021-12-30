/* Clay Garrisons
   CSCI 1010 Section 01
   Assignment 3 Reverse a number */

#include<iostream>

using namespace std;

int main()
{ 
    int x , y , z ;
    cout << "Please enter a two digit number: " ;
    cin >> x ;

    y = x/10 ;
    z = x%10 ;

    cout << "The reversed number is: " << z << y << endl;
}
    