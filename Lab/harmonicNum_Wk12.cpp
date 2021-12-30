/*Clay Garrison
CSCI 1010
Section 001
Lab Week 12-4
Calculate the harmonic numbers of a size 20 array.*/
#include<iostream>

using namespace std;

int main()
{
    double a[20], num;
    //i is the index variable and n is the divisor that is increased by one each time.
    int i  , n ;
    n = 2 ;
    num =1 ;

    for(i=0 ; i<20 ; i++)
    {
        a[i]= num ;
        cout << a[i] << "  ";
        num += (1.0/n) ;
        n++ ;
        
    }
    cout << endl;

}