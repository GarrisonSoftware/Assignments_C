#include<iostream>

using namespace std;

int main()
{
    const int MAX = 100 ;
    int a[MAX] , i , j, temp, elmNum , num , len , k;
    elmNum = 0 ;
    num = 0 ;
    temp =0 ;

    cout << "Enter Integers for the array: " ;

    for(i = 0 ; num != -1; i++)
    {
        cin >> a[i] ;
        elmNum++ ;
        num = a[i] ;
        
        

        //cout << "Element in first for loop is: " << a[i] << endl;
        //cout << "The number of elements in the first for loop is: " << elmNum <<endl;
        
    }
    cout << "a[elmNum] is:" << a[elmNum] << endl;

    len = elmNum -1 ;
    cout << "The Length is: " << len << endl;
    

    cout << "The current elements are: " << endl ;
    
    for(i = 0 ; i < len ; i++)
    {
        cout << a[i] << " " ;
        
    }
    /*a[elmNum] = 10 ;
    a[elmNum + 1] = 15 ;
    len = elmNum + 2 ;*/


    cout << "Now the elements are: " << endl;
    
    for(i = 0 ; i < len ; i++)
    {
        cout << a[i] << " " ;
    }

   
    //Sorting Loop
    for(k=1 ; k < len ; k++)
    {
        for(int l = 0 ; l < len - k ; l++)
        {
            if(a[l] < a[l+1])
            {
                temp = a[l] ;
                a[l] = a[l+1] ;
                a[l+1] = temp ;

                
            }
        }
    }

    /*len = elmNum -1 ;
    for(k = 0 ; k < len ; k++)
    {
        if(a[k] < a[k+1])
        {
            temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp ;
            //cout << "The element in the if is: " << a[k] ;
            
        }

    }*/
       
    cout << "The largest number is: " << a[0] << endl;
    cout << "The sorted array is: " ;
    for(j= 0 ; j < len ; j++)
    {
        cout << a[j] << " " ; 
    }
    cout << endl;


        
    

}