/*Clay Garrison
CSCI 1010
Section 001
Lab Week 12-1
Enter 10 numbers and print them in the reverse order.*/
#include<iostream>

using namespace std;

int main()
{

    int a[10] , i ;

    cout << "Enter 10 numbers: ";
    for(i=0 ; i < 10 ; i++)
    {
        cin >> a[i];
    }

    cout << endl << "The reverse numbers are: " ;
    
    //loop to reverse the numbers
    for(i=9; i >= 0 ; i--)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}