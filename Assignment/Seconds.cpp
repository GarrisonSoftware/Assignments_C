/* Clay Garrison
   CSCI 1010 Section 001
   Assignment 3 Seconds */
    
#include<iostream>

using  namespace std ;

int main()
{
    int x, Hours , Minutes , Seconds ;

    cout << "Enter the seconds: " ;
    cin >> x ;

    Hours = x/3600 ;
    Minutes = (x%3600)/60 ;
    Seconds = (x%3600)%60 ;

    cout << "The time is: " << Hours << " Hours " << Minutes << " Minutes " << Seconds << " Seconds" << endl ;
} 
