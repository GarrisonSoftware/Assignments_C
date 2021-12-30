/*Clay Garrison
CSCI 1010
Section 001
Assignment 7
Insert elements into an array of size 100 and manipulate and add more.*/
#include<iostream>

using namespace std;



int main()
{
    const int MAX = 100;

    int a[MAX] , n , used, largest;
    used = -1;
    largest = 0 ;
    

    cout << "Enter numbers for the array ended by -1: " ;

    for(int i = 0 ; i < MAX ; i++)
    {
        cin >> n ;

        if(n != -1)
        {
            a[i] = n;
            used++ ;
            //used to find largest element
            if(a[i] > largest)
            {   
                largest = a[i] ;
            }
            

        }

        else if(n == -1)
        {
            break;
        }
    }
    //used to fix bugs
    //cout << endl << "The used spaces are: " << used +1 << endl ;
    cout << "The elements of the array so far are: " ;
    

    for(int i = 0 ; i <= used ; i++)
    {
        cout << a[i] << " " ;
        
    }

    
    cout << endl << "The largest element is: " << largest ;
    cout << endl;

    a[used+1] = {10} ;
    a[used+2] = {15} ;
    used +=2 ;

    //used to fix bugs
    //cout << "Now the used spaces are: " << used +1 << endl;
    cout << "Now the elements in the array are: " ;

    //loop to find current elements in array
    for(int i = 0 ; i <= used ; i++)
    {
        cout << a[i] << " " ;
    }
     cout << endl ;

     cout << "After sorting the elements are: " ;
    
    //sorting loop
    for(int j = 1 ; j <= used ; j++)
    {
        for(int k = 0 ; k <= used -j ; k++)
        {
            if (a[k] < a[k+1])
            {
                int temp = a[k] ;
                a[k] = a[k+1] ;
                a[k+1] = temp ;
            } 
        }
    }

    //loop to find elements in array after sorting
    for(int i = 0 ; i <= used ; i++)
    {
        cout << a[i] << " " ;
    }
     cout << endl ;


}