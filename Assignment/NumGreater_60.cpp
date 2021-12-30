/*Clay Garrison
CSCI 1010
Section 001
Assignment 6-2
The user enters 10 numbers and the prgram tells how many are greater than 60.*/

#include<iostream>

using namespace std;

int main()
{
    double Num ;
    int i , Total;
    char Selection ;
    Total = 0 ;
//While loop so the program continue to run until the user decides to exit.
while(1)
{
    cout << endl << "Do you want to use the program?" << endl << "Yes (y) or No (N)? " ;
    cin >> Selection ;
    if(Selection == 'Y' || Selection == 'y')
    {
        cout << "Enter 10 numbers:" <<endl ;
        for(i = 1 ; i <= 10 ; i++)
        {   
            cin >> Num ;
        
            if (Num > 60)
            {
                //Adds 1 to the total each time a number is greater than 60
                Total += 1 ;
            }


        }


        cout << "Of the numbers you entered " << Total << " are greater than 60. " <<endl;
    }

    else if (Selection == 'N' || Selection == 'n')
    {
        cout << "Shutting Down....." << endl;
        break;
    }
    //Keeps the user from entering an incorrect choice
    else
    {cout << endl << "That's not an option!" << endl;}
}


}