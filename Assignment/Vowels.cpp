/* Clay Garrison
CSCI 1010 Section 001
Assignment 4
This program is given a letter and it then tells you if it is a vowel or not*/

#include<iostream>


using namespace std;

int main ()
{
char Vowel , a , e , i , o , u ; 



cout << " Please enter a lowercase character: " << endl;
cin >> Vowel ;
a = 'a' , e = 'e' , i = 'i' , o = 'o' , u = 'u' ;


if (Vowel == a ) 
    {cout << Vowel << " is a vowel " << endl;} 

else if (Vowel == e)
    {cout << Vowel << " is a vowel " << endl; }

else if (Vowel == i)
    {cout << Vowel << " is a vowel " << endl; }

else if (Vowel == o)
    {cout << Vowel << " is a vowel " << endl; }

else if (Vowel == u)
    {cout << Vowel << " is a vowel " << endl; }

else
    {cout << Vowel << " is not a vowel " << endl; }    

}