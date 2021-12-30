/*Clay Garrison
CSCI 1010
Section 001
Lab Week 13-1
Declare an array with these elements and reverse them.*/
#include<iostream>

using namespace std;

int main()
{
    int a[10] = {55,50,45,40,35,30,25,20,15,10} ;
    int b[10] , j , i , temp ,Talley ;
    cout << "The original array is: " ;
    for(int i=0 ; i < 10 ; i++)
    {
        cout << a[i] << " " ;
    }

    i=9;
    cout << endl << endl << "The reversed array is:" << " " ;
    for(j=0 ; j < 10 ; j++)
    {
        
        b[j] = a[i] ;
        i--;

        
    }

    for(j=0 ; j < 10 ; j++)
    {
        cout << b[j] << " " ;
    }
    cout << endl;


}