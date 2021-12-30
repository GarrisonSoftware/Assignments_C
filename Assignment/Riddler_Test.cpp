#include<iostream>

using namespace std;

int main()
{
    int x , Digit_1 , Digit_2 , Digit_3 , Digit_4;
    cout<< "Enter 4 digit number: ";
    cin >> x ;
    Digit_1 = x % 10 ;
    Digit_2 = (x % 100) / 10 ;
    Digit_3 = (x % 1000) / 100 ;
    Digit_4 = (x % 10000) / 1000 ;

    cout << "Digit 1 is: " << Digit_1 <<endl;
    cout << "Digit 2 is: " << Digit_2 <<endl;
    cout << "Digit 3 is: " << Digit_3 <<endl;
    cout << "Digit 4 is: " << Digit_4 <<endl;
    

}