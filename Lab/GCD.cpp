/* Clay Garrison
CSCI 1010
Section 001
Week 10 Lab-2
Find the GCD of two integers*/

#include<iostream>

 using namespace std;

 int main ()
 {
    int x , y , r , GCD ;
    char Selection ;

    while(1)
    {
        cout << " Enter C to Continue or enter E to Exit: " ;
        cin >> Selection ;
        Selection ;

        if (Selection == 'c' || Selection == 'C')
        {
            cout << "Enter two integers: " ;
            cin >> x >> y ;
            
            if(x > y)

            {   while(x % y != 0)
                {
                    r = x % y  ;
                    x = y ;
                    y = r ;
                    x % y ;
              
                }
                GCD = y ;
                cout << "The GCD is: " << y << endl;
            }

            else if (y > x)
            {
                while(y % x != 0)
                {
                    r = y % x ;
                    y = x ;
                    x = r ;
                    y % x ;
                }
                GCD = x ;
                cout << "The GCD is: " << x<< endl;
            }

            else if (x == y)
            {
                GCD = x ;
                cout << "The GCD is: " << x << endl;
            }
            
        }

        else if (Selection == 'e' || Selection == 'E')
        {
            break;
        }

        else
        {
            cout << "That's not a selection! " << endl;
        }


    }
    
    cout << "Goodbye" << endl;

 }

   
