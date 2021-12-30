#include<iostream>

using namespace std;

int main ()
{
double Loan , Total_1 , Total_2 , Interest_1 , Interest_2 , Min_Pay ;

    cout << "How much is the loan? $" ;
    cin >> Loan ;

    if (Loan <=1000)
    {
        Interest_1 = Loan * 0.015 ;
        Total_1 = Interest_1 + Loan ;
        
        if (Total_1 <= 10)
        {
            Min_Pay = Total_1 ;
            cout << "The interest due is $" << Interest_1 << endl;
            cout << "The total amount due is $" << Total_1 << endl;
            cout << "The minimum payment is $" << Min_Pay << endl;
        }

        else 
        {Min_Pay = Total_1 * 0.1 ;
         
         cout << "The interest due is $" << Interest_1 << endl;
         cout << "The total amount due is $" << Total_1 << endl;
         cout << "The minimum payment is $" << Min_Pay << endl;

        }

    }
        else
        {
            Interest_2 = (1000 * 0.015) + ((Loan-1000)*0.01) ;
            Total_2 = Loan + Interest_2 ;
            Min_Pay = Total_2 * 0.1 ;
            cout << "The interest due is $" << Interest_2 << endl;
            cout  << "The total amount due is $" << Total_2 << endl;
            cout << "The minimum payment is $" << Min_Pay << endl;

        } 

}