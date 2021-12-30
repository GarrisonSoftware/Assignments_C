#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i , square, binary , y , x , digits , decimal ;
    i = 0 ;
    decimal = 0 ;


    cout << "Enter a binary number: " ;
    cin >> binary ;

    do
    {
        x = binary % 10; 
        binary /= 10 ;

        if(x == 1)
        {
            square = pow(2,i) ;
            decimal += square ;
            //cout << "Square in if statement: " << square << endl;

        }
        i++ ;
    } while (binary != 0);

    cout << "The decimal equivalent is: " << decimal << endl;
    


}