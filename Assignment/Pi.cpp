/* Clay Garrison
CSCI 1010 
Section 001
Assignment 5-3
Calculate the calue of Pi up to term 99 */

#include<iostream>

using namespace std;

int main()
{
    double x , i , Pi, Sum;
    
    i = 1 ;
    Sum = 0;
    
    
    
   while(i <= 99)
   {
       Sum += (1/i) ;

       i += 2 ;

       Sum -= (1/i) ;

       i += 2 ;

   }
    
    Pi = 4 * Sum ;

    cout << "The value of Pi is: " << Pi << endl;

        
        
        
            

        
    

   




}