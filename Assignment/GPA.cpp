/*Clay Garrison
CSCI 1010 
Section 001
Assignment 8-1
Calculate the GPA of letter grades in an array.*/
#include<iostream>

using namespace std;

//Function to calculate the GPA of an array
double converter(char grades[], int size)
{
    double total=0 , GPA=0;
    for(int i=0 ; i<size ; i++)
    {
                
        if(grades[i]== 'A')
        {
            total+=4;
        }
        else if (grades[i]=='B')
        {
            total+=3;
        }
        else if(grades[i]=='C')
        {
            total+=2;
        }
        else if(grades[i]=='D')
        {
            total+=1;
        }
        else if(grades[i]='F')
        {
            total+=0;
        }
        
    }
    return GPA = total/size ;

}

int main()
{
    //Arrays that hold the student grades.
    char studentA[] = {'A','A','B','A','D','C','A','A'} ;
    char studentB[] = {'B','B','D','F','A','A','B','A','A','D','A','B'} ;


    cout << "Student A's GPA: " << converter(studentA, 8) << endl;
    cout << "Student B's GPA: " << converter(studentB,12) << endl;

}