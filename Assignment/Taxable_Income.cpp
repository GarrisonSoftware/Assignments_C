/* Clay Garrison
CSCI 1010 Section 001
Assignment 4
This program is given an income and then calculates how much tax is owed. */

#include<iostream>

using namespace std;

int main ()
{

   double Income , Tax_1 , Tax_2 , Tax_3 , Tax_4 , Tax_5 ;

   cout << "How much do you make? " ;

   cin >> Income ; 

   Tax_1 = Income * 0.01 ;
   Tax_2 = ((Income - 750) * 0.02) + 7.5;
   Tax_3 = ((Income - 2250) * 0.03) + 37.5;
   Tax_4 = ((Income - 3750) * 0.04) + 82.5;
   Tax_5 = ((Income - 5250) * 0.05) + 142.5;
   
   if (Income < 750)
   {cout << "The taxes that are owed are: $" << Tax_1 << endl;}

    else if (Income >= 750 && Income < 2250)
    {cout << "The Taxes that are owed are: $" << Tax_2 << endl;}

    else if (Income >= 2250 && Income < 3750)
    {cout << "The Taxes that are owed are: $" << Tax_3 << endl;}

    else if (Income >= 3750 && Income < 5250)
    {cout << "The Taxes that are owed are: $" << Tax_4 << endl;}

    else if (Income >= 5250)
    {cout << "The Taxes that are owed are: $" << Tax_5 << endl;}

    else
    {cout << "You didn't enter something right....ARE YOU TRYING TO CHEAT THE IRS!!!!! " << endl;}
}