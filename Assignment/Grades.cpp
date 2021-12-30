/* Clay Garrison
CSCI 1010 
Section 001
Assignment 4
Switch for letter grades. */
#include<iostream>

using namespace std;

int main ()
{

    char Grade ;

    cout << "Enter a letter grade: " ;
    cin >> Grade ;
    
    switch (Grade)
    {
        case 'A':
        cout << "Excellent" << endl;
        break ;

        case 'B' :
        cout << "Good" << endl;
        break ;

        case 'C' :
        cout << "Average" << endl;
        break ;

        case 'D' :
        cout << "Poor" << endl;
        break ;

        case 'F' :
        cout << "Failing" << endl;
        break ;

        default :
        cout << "Wait a minute...YOU TYPED SOMETHING WRONG!!!!! " << endl;
        break ;
    }
}
