/*Clay Garrison
CSCI 1010
Section 001
Project-2
Create a Student Information Management System*/
#include <iostream>
#include <string>

using namespace std;

void menu(void) ;
void stats(int grades[] , int used) ;
void remove(string students[] , int student_ID[] , int grades[] , int used , int remove_ID) ;

int main()
{
    const int MAX = 100;
    string students[MAX] ;

    int select , search_ID ,  ID , student_ID[MAX], used  , grades[MAX] , remove_ID ;
    ID = 0 , used = 0;

    while(1)
    {
        menu() ;
        cin >> select ;
        
        
        if(select == 1)
        {
            if(ID < MAX)
            {
                ID += 1; //creates the ID for each student
            
                cout << "The ID for the new student is: " << ID << endl;
                student_ID[used] = ID ; //matches up the ID with it's correct spot in the array

                cout << endl << "Enter the name of the new student (last,first) " ;
                cin >> students[used] ;

                cout << endl << "Enter the grade of the student: " ;
                cin >> grades[used] ;

                used += 1 ;
            }

            else
            {
                //error message to show the system is full and no more students can be added
                cout << endl << "The Limit of the system has been reached! " << endl << "Rermove a student before adding another! " << endl;
            }
        
        }

        else if(select == 2)
        {
           
            search_ID = 0 ; //reinitialize the variable each time

            cout << "Enter the ID of the Student: " ;
            cin >> search_ID ;

            if(search_ID > 0 && search_ID <= used) //if-else to keep user from making a wrong selection
            {
                cout << endl << "The ID is: "  << student_ID[search_ID-1] << endl ;
                cout << "Student Name: " << students[search_ID-1] << endl ;
                cout << "Grade is: " << grades[search_ID-1] << endl ;
            }
            else
            {
                cout << endl << "That's not a current ID in use!!! " << endl; //error message
            }

        }

        else if(select == 3)
        {
            if(used > 0) //if-else to keep user from making a wrong selection
            {
                stats(grades , used) ;
            }
            else
            {
                cout << endl << "THERE AREN'T ANY STUDENTS IN THE SYSTEM!!! " << endl ; //error message
            }   
        }

        else if(select == 4)
        {
            
            remove_ID = 0 ;
            cout << "Enter Student ID that needs to be removed: " ;
            cin >> remove_ID ;
            
            if(remove_ID > 0 && remove_ID <= used ) //if-else to keep user from making a wrong selection
            {
                cout << endl << "Student " << students[remove_ID-1] << " has been removed from the system: " << endl;
                cout << endl;
                
                remove(students , student_ID , grades , used , remove_ID) ;
                
                used -= 1 ; //keeps track of what is in all of the arrays
                ID -= 1 ; //keeps track of ID
            }

            else
            {
                cout << endl << "That's not a current ID in use!!! " << endl; //error message
                
            }
        }

        else if(select == 5)
        {
            if(used > 0) //if-else to keep user from making a wrong selection
            {
                cout << endl << "ID  Name             Grade " << endl << endl;
                for(int i=0 ; i < used ; i++)
                {
                    cout << student_ID[i] << "   " << students[i] << "     " << grades[i] << endl;
                }
            }

            else
            {
                cout << endl << "There aren't any students to list!! " <<endl; //error message
            }    
        }
            
        else if(select == 6)
        {
            cout << endl << "Shutting down...." << endl;
            break ;
        }
            
        else if(select > 6)
        {
            cout << endl << "That's not an option!!! " << endl; //error message
            
        }
            
        else //used to keep user from entering a non-integer input and possibly creating an infinite loop
        {
            cout << endl << "WOAH! That's not an option!...YOU'LL CRASH THE SYSTEM!!" << endl; //error message
            cout << endl << "Safety mode initiated....Shutting down...." << endl;
            break;

        }

        

       

    }

    
}

void menu(void)
    {
        cout << endl << "***CSCI 1010 Student Information Managment System " << endl;
        cout << endl;
        cout << "1) Add Student " << endl;
        cout << "2) Search by ID " <<endl;
        cout << "3) Grade Statistics " <<endl;
        cout << "4) Remove a Student " << endl;
        cout << "5) Print All Students " <<endl;
        cout << "6) Exit The System " <<endl;
    }
    
void stats(int grades[] , int used)

    {
        int highest = 0 ; 
        int lowest = 100  ;
        int mean = 0 ; 
        int total = 0 ;
        
        if(used > 1) 
        {
            for(int i = 0 ; i < used ; i++)
            {
             
                if(highest <= grades[i])
                {
                    highest = grades[i] ;
            
                }

                if(lowest >= grades[i])
                {
                    lowest = grades[i];
                }
          
                total += grades[i];

            }
        }

        else //if there is only one student in the system the stats will still be accurate
        {
            highest = grades[used-1] ;
            lowest = grades[used-1] ;
            total = grades[used-1] ;
        }
        
        mean = total/used ;
        cout << endl << "The highest grade is: " << highest <<endl;
        cout << "The lowest grade is: " << lowest << endl;
        cout << "The mean of the grades is: " << mean << endl;
        cout << endl;
    }
void remove(string students[] , int student_ID[] , int grades[], int used , int remove_ID)
{
    
    
    for(int i = 0 ; i < used ; i++)
    {
        if(remove_ID-1 == used) //if the selected student is last in the array this will help remove them
        {
            break;
        }
        else if(remove_ID != used)
        {
            students[remove_ID-1] = students[remove_ID] ;
            grades[remove_ID-1] = grades[remove_ID] ;
            remove_ID += 1 ;
        }

        
    }
    
}