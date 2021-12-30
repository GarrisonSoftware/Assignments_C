#include<iostream>

using namespace std;

int main()
{ 
    double Bill, Tip , Percent , People, Total ;

    cout << "How much is the Bill? $ " ;
    cin >> Bill ;
    cout << "What is the percentage of tip? " ;
    cin >> Percent ;
    cout << "How many people will split the bill? " ;
    cin >> People ;

    Tip = Percent/100 ;

    
    Total = (Bill * Tip + Bill)/People ;

    cout << "Each person owes: $ " << Total << endl ;

}



