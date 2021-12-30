/*Clay Garrison
CSCI 1010
Section 001
Lab Week 12-3
Enter 10 numbers and the progrm will find trhe mean of the numbers and tell how many numbers are greater and lower than the mean.*/
#include<iostream>

using namespace std;

int main()
{
    int a[10] , i , mean , greater , lower ;
    mean = 0 ;
    greater = 0 ;
    lower = 0 ;
    cout << "Enter 10 numbers: " ;

    //Loop to enter 10 elements into the array
    for (i=0 ; i<10 ; i++)
    {
        cin >> a[i] ;
        mean += a[i] ;
    }
    
    mean = mean/10 ;

    //Loop to calculate how many numbers are greater and lower than the mean 
    for (i=9 ; i>= 0 ; i--)
    {
        if(a[i] > mean)
        {
            greater++ ;
        }
        if(a[i]<= mean)
        {
            lower++ ;
        }

    }
    cout << "The mean is: " << mean << endl;
    cout << "There are " << greater << " elements greater than the mean. " << endl ;
    cout << "There are " << lower << " elements lower than the mean. " << endl ;
}