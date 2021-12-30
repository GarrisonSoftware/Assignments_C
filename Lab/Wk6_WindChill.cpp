/* Clay Garrison
CSCI 1010 Section 1
Week 6 Lab Wind Chill*/

#include<iostream>
#include<math.h> 

using namespace std;

int main ()
{
    float T, V , W ;

    cout << "What is the temperature? " ;
    cin >> T ;
    cout << "What is the velocity? " ;
    cin >> V ;

    W = 35.74 + 0.6215 * T + (0.4275 * T - 35.75) * pow(V,0.16) ;

    cout << "The Wind Chill is: " << W  << endl ;
}


