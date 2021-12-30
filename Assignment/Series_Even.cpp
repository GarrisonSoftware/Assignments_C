/* Clay Garrison
CSCI 1010 
Section 001
Assignment 5-1
The program adds all the even integers out of all the inputs of the user.*/

#include<iostream>

using namespace std;

int main()
{
    
    int x , Sum ;
    Sum = 0;
    
    cout << "Please enter values for x enter 0 when finished: " << endl;
    cout << endl;

    while( x != 0)
    {
        cin >> x ;
        
        if (x % 2 == 0)
        {
            Sum += x;
        }
    
    }
    cout << endl;
    cout << "The total sum of all the even numbers is: " << Sum << endl;


}