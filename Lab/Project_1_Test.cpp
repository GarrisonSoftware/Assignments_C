#include<iostream>

using namespace std;

int main()
{
    double Price , Total , Item ;
    int Quantity ;
    char Selection ;
    

     
    
    while(1)
    {
        cout << "Welcome to HG Diner! " << endl;
        cout << "Do you want to order? " ;
        cin >> Selection ;
        
        if (Selection == 'Y' || Selection == 'y')
        { 
            while(1)
            {
                cout << "##### Menu #####" << endl;
                cout << "1) Burger-----1.99" << endl;
                cout << "2) Fries-----0.99" << endl;
                cout << "3) Soda------1.00" << endl;

                Total += Price ;
                cout << "What do you want? " ;
                cin >> Selection ;
        

        
                if(Selection == '1')
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
                    Item = 0.99 ;
                    Price = Quantity * Item ;
            

            

            else if (Selection == '3')
            {
                cout << "How much do you want? " ;
                cin >> Quantity ;
                Item = 1.00 ;
                Price = Quantity * Item ;
            
            }

            else if (Selection == 'C' || Selection == 'c')
            {
                
                cout << "Your total is: " << Total <<endl;
                Total = 0 ;
                Price = 0 ;
                break;
            }

        }
            
            }

            else if(Selection == 'N' || Selection == 'n')

            {
                cout << "Come back and see us Shug! " << endl;
                break;
            }






    }

}