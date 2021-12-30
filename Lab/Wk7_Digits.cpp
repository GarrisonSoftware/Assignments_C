#include<iostream>

using namespace std;

int main ()
{
    int number ;

    cout << "Enter a number with no more than four digits: " ;
    cin >> number ;

    if (number >= 0 && number <= 9)
{
    cout << "The number has one digit. " << endl;
}
    else if (number >= 10 && number <= 99)
    {
        cout << "The number has two digits. " << endl;
    }

    else if (number >= 100 && number <= 999)
    {
        cout << "The number has three digits. " << endl;
    }

    else if (number >= 1000 && number <= 9999)
    {
        cout << "The number has four digits." << endl;
    }

    else 
    {cout << "HEY!! I said no more than four digits!!! " << endl; 
     cout << "You didn't follow the rules!!! " << endl ;
    }

}