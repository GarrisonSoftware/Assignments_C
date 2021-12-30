/*Clay Garrison
CSCI 1010 
Section 001
Week 11-1
Find the smallest number out of 10*/
#include<iostream>

using namespace std;

int main()
{

    double x , y , i , smallestNumber;

    y = 0 ;
    smallestNumber = 0 ;

    cout << "Enter 10 numbers: " << endl;
    for(i = 1 ; i <= 10 ; i++)
    {
        cin >> x ;
        
        if(x <= y)
        {
            smallestNumber = x ;
        }

        if(smallestNumber >= x)
        {
            smallestNumber = x ;
        }

    }
    cout << "The smallest number is: " << smallestNumber << endl;
}