/* Clay Garrison
CSCI 1010 
Section 001
Assignment 5-2
Enter a positive integer to calculate the hailstone sequence.*/

#include<iostream>

using namespace std;

int main ()
{

    int x , n ;
    char  y ;
// Loop to keep program running
while (1)
{
    cout << endl;
    cout << "Hailstone Sequencer type c to conitnue or e to exit: " ;
    cin >> y ;

// Enter E to end program or C to contine with program
    if (y == 'E' || y == 'e')
    {
        break;
    }

    else if (y == 'C' || y == 'c')
    {
        cout << endl;
        cout << "Enter a positive integer: " ;
        cin >> x ;
        cout << endl << "The Hailstone Sequence of " << x << " is:" << endl << endl;

        // String to make sure user enters positive integer
        if(x <= 0)
        {
            cout << "Wait a minute....THAT'S NOT A POSITIVE INTEGER!!! " << endl;
        }


        // Calculates the hailstone sequence
        for(x ; x > 0 && x != 1 ; x = n )
        {
            cout << x << "," ;
            if (x % 2 == 0)
            {
                n = x / 2 ;
            
            }

            else 
            {
                n = 3 * x +1 ;
           
            }

         
        
        
        }
            // Adds one to the end of the hailstone sequence
            cout << x << endl;

    } 
    
    else
    {
        // Makes sure the user enters E or C  
        // to decide to run or end program
        cout << endl;
        cout << "Invalid input.....READ THE DIRECTIONS!!!! " << endl;
    }
    
    } 

 

}