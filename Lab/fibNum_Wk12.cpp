/*Clay Garrison
CSCI 1010
Section 001
Lab Week 12-2
Fibonacci Numbers in an array of size 40.*/
#include<iostream>

using namespace std;

int main()
{
    int a[40] , i , num , x ;
    
    //num is the variable that is added to the previous number to get the new number.
    //x is the variable that stores the previous number.
    num = 0;
    x = 1 ;

    for(i=0 ; i < 40; i++)
    {
        
        a[i] = num ;
        num += x ;
        x = a[i] ;

        //cout << "Number in for loop " << num ;
        cout << a[i]  << "  ";
    }
    cout << endl ;
}