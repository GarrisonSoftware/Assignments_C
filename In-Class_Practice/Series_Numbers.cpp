#include<iostream>

using namespace std;

int main ()
{

    double Sum , N ;
    cout << "Please enter numbers: " ;
    while(1)
    {
        cin >> N ;
        
        if(N==0)
        {
            break ;
        }
        Sum += N ;
    }
    cout << "The sum of the numbers is: " << Sum << endl;
    
}