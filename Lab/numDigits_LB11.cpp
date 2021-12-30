#include<iostream>

using namespace std;

int main()
{

    int x , y , digits ;
    cout << "Enter an integer: " ;
    cin >> x ;
    digits = 0 ;
    do
    {
        y = x % 10 ;
        x /= 10 ;

        if (y != 0)
        {
            digits++ ;
        }
        
    } while (y != 0) ;
    
    cout << "The number of digits in this number is: " << digits << endl;

}