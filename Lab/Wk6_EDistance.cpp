#include<iostream>
#include<math.h>

using namespace std ;

int main ()
{
    double x , y , Distance , A , B ;

    cout << "Please enter an x value: " ;
    cin >> x ;
    
    cout << "Please enter a y value: " ;
    cin >> y ;
    
    A = pow(x,2) ;
    B = pow(y,2) ;
    
    Distance = sqrt(A+B) ;

cout << "The distance between the two points is; " << Distance << endl ;

    
}
