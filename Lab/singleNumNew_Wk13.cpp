#include<iostream>

using namespace std;

int main()
{
    int i , j , temp ;

    int a[3] = {2,2,1} ;
    //int b[5] = {4,1,2,1,2} ;
    //int c[7] = {7,3,3,9,7,9,1} ;

    for(i=0 ; i<3 ; i++)
    {
        for( j=0 ; j < 3-i ; j++)
        {
            if(a[i] < a[i+1])
            {
                temp = a[i] ;
                a[i] = a[i+1] ;
                a[i+1] = temp ;
            }

        }
    }

    cout << "The elements in the array are: " ;
    for(i=0 ; i<3 ; i++)
    {
        cout << a[i] << " ";

    }
    cout << endl;


}