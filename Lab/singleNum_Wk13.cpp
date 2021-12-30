#include<iostream>

using namespace std;


void sort(int a[] , int used)
{
    for(int i=0 ; i<used ; i++)
        {
            for(int j=0 ; j<used-i ; j++)
            {
                if(a[j] < a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1] ;
                    a[j+1] = temp ;
                }
            }
        }
    }

void elements(int a[], int used)
{
    
    for(int i=0 ; i < used ; i++)
    {
        int a[i];
        cout << a[i] << " " ;
    }
}

void loner(int a[] ,int used)
{
    for(int i=0; i < used ; i++)
  {
      int a[i];
      if(a[i] != a[i+1] && a[i+1] != a[i+2])
      {
          
          int single = a[i+1];
          
      }
      else if(a[i] != a[i+1] && a[i+1] != a[i+2])
      {
          int single = a[i] ;
      }
  } 
  int single ;
  cout << "The single element is: " << single <<endl;
}
int main()
{

    int a1[3] = {2,2,1} ;
    int b1[5] = {4,1,2,1,2} ;
    int c1[7] = {7,3,3,9,7,9,1} ;

    int i , j , used , n , multiple, temp;
    used = -1 ;
    
    
  cout << "The elements in the array are: " ;
  elements(a1 , 3) ;
 
  loner(a1 , 3) ;
  
  
  

    /*sort(a1,3);
    sort(b1,5);
    sort(c1,7);

    cout << "The elements in the array aftering being sorted are: ";
    for(i=0 ; i < used ; i++)
    {
        cout << a[i] << " " ;
    }

    cout << endl;*/

    
}