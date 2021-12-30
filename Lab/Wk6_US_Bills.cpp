/* Clay Garrison
CSCI 1010 Section 1
Week 6 Lab US Bills */

#include<iostream>

using namespace std;

int main ()
{
    // TWD = $20 , TED = $10 , FIVD = $5 , ONED = $1
    int x , TWD , TED , FIVD , ONED ;
    cout << "Please enter the dollar amount: " ;
    cin >> x ;

    TWD = x/20 ;
    TED = (x%20)/10 ;
    FIVD = (x%10)/5 ;
    ONED = (x%5)/1 ;

    cout << "Number of 20 Bills: " << TWD << endl;
    cout << "Number of 10 Bills: " << TED << endl;
    cout << "Number of 5 Bills: " << FIVD << endl;
    cout << "Number of 1 Bills: " << ONED << endl ;

}

