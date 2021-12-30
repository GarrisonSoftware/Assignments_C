#include<iostream>

using namespace std;


int main () 
{ int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55}; 
int n = sizeof(arr)/sizeof(arr[0]); 
int i; 
int j; 
int sort; 
for (i = 0; i < n; i++) 
{ for (j = i+1; j <n; j++) 
{ if (arr[j] > arr[i]) 
{ sort = arr[i]; 
arr[i] = arr[j]; 
arr[j] = sort; 
} 
} cout << arr[i] << " "; } 
}