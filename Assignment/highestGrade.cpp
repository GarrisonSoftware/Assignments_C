/*Clay Garrison
CSCI 1010
Section 001
Assignment 6-4
Calculate the highest, lowest, and mean of 10 grades.*/
#include<iostream>

using namespace std;

int main()
{
    int i ;
    double g1 , g2 , grade , highestGrade , lowestGrade , meanGrade ;
    char Selection ;
    
    highestGrade = 0 ;
    lowestGrade = 0 ;


    while(1)
    {
        cout << endl << "Do you want to calculate the highest, lowest, and mean of 10 grades?" << endl;
        cout << "Yes (Y) or No (N)? " ;
        cin >> Selection;
        

        if(Selection == 'Y' || Selection == 'y')
        {
            cout << "Enter grade 1: " ;
            cin >> g1 ;
            cout <<"Enter grade 2: " ;
            cin >> g2 ;
            meanGrade = g1 + g2 ;

            if(g1 >= g2)
            {
                highestGrade = g1 ;
                lowestGrade = g2 ;
            }
            else if(g1 < g2)
            {
                highestGrade = g2 ;
                lowestGrade = g1 ;
            }
        
            for(i=3 ; i <= 10 ; i++)
            {
                cout << "Enter grade " << i << ": " ;
                cin >> grade ;
                

                if(grade >= highestGrade)
                {
                    highestGrade = grade ;
                }
                else if(grade < lowestGrade)
                {
                    lowestGrade = grade;
                    
                }
                

                
                meanGrade += grade ;
            }

            

            cout << endl << "The highest grade is: " << highestGrade << endl ;
            cout << "The lowest grade is: " << lowestGrade << endl ;
            cout << "The mean grade is: " << meanGrade/10 << endl ;

        }

        else if(Selection == 'N' || Selection == 'n')
        {
            cout << "Shutting down...." <<endl;
            break ;
        }

        else
        {
            //Message to keep user from selecting a wrong option
            cout << endl << "I didn't say that was an OPTION!!!! " << endl ;
        }


    }
}