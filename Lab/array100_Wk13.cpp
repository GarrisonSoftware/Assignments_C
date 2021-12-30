/*Clay Garrison
CSCI 1010
Section 001
Week 13 Lab-2
Declare array of size 100 and change the elements.*/
#include<iostream>

using namespace std;

void sort(int a[] , int n)
{
    for(int j =1 ; j < n ; j++)
    {
        for(int i = 0; i < n-j ; i++)
        {
            if(a[i] < a[i+1])
            {
                int temp = a[i] ;
                a[i] = a[i+1];
                a[i+1] = temp;

            }
        }
    }
}

int main()
{
   const int MAX = 100 ;
    int a[MAX] , used ;

   cout<< "Enter 8 numbers: " ;

   for(int i = 0 ; i < 8 ; i++)
   {
       cin >> a[i] ;
       //used++ ;
    } 

   cout << endl << "The numbers in the array are: " ;
   for(int i = 0 ; i < 8 ; i++)
   {
       cout << a[i] << " " ;
   }
   //cout << "Used is: " << used ;
   a[8]={18} ;

   cout << endl << "After inserting 18 the numbers in the array are: " ;
   for(int i=0 ; i <= 8 ; i++)
   {
       cout << a[i] << " " ;
   }

   sort(a,9);

   cout << endl << "The sorted array is: " ; 

   for(int i = 0 ; i < 9 ; i++)
   {
       cout << a[i] << " " ;
   }
   cout << endl;


}