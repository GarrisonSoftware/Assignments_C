 /*Clay Garrison
CSCI 1010 Section 001
Assignment 4
The program is given two integers and then tells which is bigger.*/

#include<iostream>
 
using namespace std;

 int main ()

 {

     int x , y ;

     cout << "please enter two integers: " << endl ;
     
     //These are the two inegers given by the user
     cin >> x , cin >> y ;

     if (x == y )
     {cout << x << " and " << y << " are equal " << endl; }

     else if (x > y )
     {cout << x << " is greater than " << y << endl; }

     else if (x < y )
     {cout << y << " is greater than " << x << endl; }

     else 
     {cout << " Whait a minute....YOU ENTERED SOMETHING WRONG!!!! " << endl; }


 }
