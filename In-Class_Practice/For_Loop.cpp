#include<iostream>

using namespace std;

int main()
{

    int i , n , sum ;
    

    cout << "Enter a value for n: " , cin >> n;
    cout << endl << endl;

    for(i=1 ; i <= n ; i++ )
    {
        sum = i ;
        cout << sum << endl;
    }
    cout << endl << endl;
    cout << "The value of the sum is: " << sum << endl;
}