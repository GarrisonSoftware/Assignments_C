/* Clay Garrison
CSCI 1010
Section 001
Assignment 6-3
It's up to Batman to use this program to find the Riddler. */
#include<iostream>

using namespace std;

int main()
{
    int onesPlace , tensPlace , hundredsPlace , thousandsPlace , address , sum ;
    
    for(address = 0000 ; address <= 9999 ; address++)
    {
        //Finds each digit of a four digit number
        onesPlace = address % 10 ;
        tensPlace = (address % 100) / 10 ;
        hundredsPlace = (address % 1000) / 100 ;
        thousandsPlace = (address % 10000) / 1000 ;

        //Finds the sum of all the digits
        sum = onesPlace + tensPlace + hundredsPlace + thousandsPlace ;

        if(thousandsPlace == 3 * tensPlace && sum == 27 && address % 2 != 0 )
        {
            cout << endl << address << " Matches parameters. " << endl;
        } 

    }

    cout << endl << "Go get him Batman...." << endl;
}