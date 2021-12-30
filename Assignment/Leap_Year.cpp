/* Clay Garrison
CSCI 1010 Section 001
Assignment 4
This program is given a year and then tells if it is a leap year or not. */

#include<iostream>

using namespace std;

int main()
{
    int Year ;

    cout << "What is the year? " ;
    cin >> Year ;

    if (Year % 4 == 0 && Year % 100 != 0)
    {cout << "The year " << Year << " is a leap year! " << endl;}

    else if (Year % 400 == 0)
    {cout << "The year " << Year << " is a leap year! " << endl;}

    else 
    {cout << "The year " << Year << " is not a leap year! " << endl;}


}