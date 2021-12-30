/* Clay Garrison
   CSCI 1010 Section 001
   Assignment 3 Formula */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, x , v , t , g , Formula ;

    cout << "Enter x: " ;
    cin >> x ;
    cout << "Enter v: " ;
    cin >> v ;
    cout << "Enter t: " ;
    cin >> a ;

    t = pow(a,2) ;
    g = 9.80665 ;

    Formula = (x + v*t - g * t)/2 ;

    cout << "The answer is: " << Formula << endl ;
}