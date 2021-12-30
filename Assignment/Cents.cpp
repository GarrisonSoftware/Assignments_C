#include<iostream>

using namespace std;

int main()
{ 
    int Quarter , Dime , Nickel , Penny ;
    int Total ;
   
    cout << "How many Quarters? " ;
    cin >> Quarter ;
    cout << "How many Dimes? " ;
    cin >> Dime;
    cout << "How many Nickels? " ;
    cin >> Nickel ;
    cout << "How many Pennies? " ;
    cin >> Penny ;

    Total = Quarter * 25 + Dime * 10 + Nickel * 5 + Penny * 1 ;

    cout << "The total cents you have is: " << Total << endl ;
}



