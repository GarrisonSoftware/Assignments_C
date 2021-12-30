/* Clay Garrison
CSCI 1010 
Section 001
Lab Week 10
Scientific Calculator */

#include<iostream>
#include<math.h>

using namespace std;

int main()

{

    double Num , Result ;
    char Selection ;    

    while(1)
    {
        cout << endl << "*****Scientific Calculator***** " << endl << endl;
        cout << "1) Square " << endl << "2) Square Root " << endl << "3) Exit " << endl << endl;
        
        cout << "Enter choice from menu: " ;
        cin >> Selection;
        
       

        if(Selection == '1')
        {
            cout << endl << "Please enter a number: " ;
            cin >> Num;

            Result = pow(Num,2) ;
            cout << endl << "The square of " << Num << " is: " << Result << endl;
        }

        else if(Selection == '2')
        {
            cout << endl << "Please enter a number: " ;
            cin >> Num;

            Result = sqrt(Num) ;
            cout << endl << "The square root of " << Num << " is: " << Result << endl;
        }

        else if(Selection == '3')
        {
            break;
        }

        else
        {
            cout << endl << "THATS NOT AN OPTION!!! " << endl;
        }

    }
}
