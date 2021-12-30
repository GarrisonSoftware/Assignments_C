/*Clay Garrison
Harrison Ray Raines
CSCI 1010
Project 1
Self Checkout System*/
#include<iostream>

using namespace std;

int main()
{
    double Price , Total , Item ;
    int Quantity ;
    char Selection ;
    

     
    
    while(1)
    {
        cout << endl << "Welcome to HG Diner! " << endl;
        cout << endl << "Do you want to order? " ;
        cin >> Selection ;
        
        if (Selection == 'Y' || Selection == 'y')
        { 
            //Checkout system loop
            while(1)
            {
                
                cout << endl << "##### Menu #####" << endl << endl;
                cout << "Breakfast:" << endl;
                cout << "1) French Toast-----$1.99      2) Scrambled Eggs-----$2.50 " << endl;
                cout << "3) Bacon------------$1.50      4) Coffee-------------$2.00 " << endl;
                cout << "Lunch : " << endl;                  
                cout << "5)  Burger----------$1.99      6) Fries--------------$1.50 " << endl;
                cout << "7) Hotdog----------$1.50       8) Soda---------------$2.00 " << endl;
                
                
                //Updates the total for each item
                Total += Price ;
                cout << endl << "What can I get for ya? " ;
                cin >> Selection ;
        

        
                if(Selection == '1' || Selection == '5')
                {
                    cout << "How much do you want? " ;
                    cin >> Quantity ;
                    Item = 1.99;
                    Price = Quantity * Item ;
            

                }

                else if (Selection == '2')
                {
                    cout << "How much do you want? " ;
                    cin >> Quantity ;
                    Item = 2.50 ;
                    Price = Quantity * Item ;
            

                }

                else if (Selection == '3'|| Selection == '6' || Selection == '7')
                {
                    cout << "How much do you want? " ;
                    cin >> Quantity ;
                    Item = 1.50 ;
                    Price = Quantity * Item ;
            
                }
                else if (Selection == '4' || Selection == '8')
                {
                    cout << "How much do you want? " ;
                    cin >> Quantity ;
                    Item = 2.00 ;
                    Price = Quantity * Item ;
                }

                else if (Selection == 'C' || Selection == 'c')
                {
                
                    cout << endl << "Your total is: $" << Total <<endl;
                    cout << "Have a good day Hun! " << endl;
                    
                    //Resets the System for the next customer
                    Total = 0 ;
                    Price = 0 ;
                    break;
                }

                            
                                   

            }
            
        }

        else if(Selection == 'N' || Selection == 'n')

        {
            cout << endl << "Come back and see us Shug! " << endl;
            break;
        }

        else
        {
            //Keeps the user from entering a wrong input
            cout << endl << "Hun I don't understand what ya want." << endl;
        }






    }

}