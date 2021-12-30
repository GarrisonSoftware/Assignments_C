#include<iostream>

using namespace std;

int main()
{ 
    double Cheeseburger_P , Expresso_P;
    Cheeseburger_P = 5.89 , Expresso_P = 3.99 ;
    
    int Cheeseburger_A , Expresso_A ;
    cout << "How many Cheeseburgers do you want? " ;
     cin >> Cheeseburger_A ;
     cout << "How many Expressos do you want? " ;
     cin >> Expresso_A ;

    
    double Price ;
    Price = Cheeseburger_A * Cheeseburger_P + Expresso_A * Expresso_P ;
    double Tax ;
    Tax = 0.07 * Price ;
    double Total ;
    Total = Tax + Price ;

    cout << "Your total is: $" << Total << endl;
    cout << "Will that be cash, card, or Pirate Meal? " << endl;

}
