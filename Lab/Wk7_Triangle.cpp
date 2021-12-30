/* Clay Garrison
   CSCI 1010 Section 1
   Lab Week 7
   Check if three angles makeup a triangle */

#include<iostream>

using namespace std;

int main ()
{    // Angle_A, Angle_B, and Angle_C are the three angles 
    // Value is the sum of all the anlges
    double Angle_A , Angle_B , Angle_C , Value ;

    cout << "Please enter Angles A, B, and C with a space between them: " ;
    cin >> Angle_A , cin >> Angle_B , cin >> Angle_C ; // The users will enter the value of the angles

    Value = Angle_A + Angle_B + Angle_C ; // Calculates the sum of the angles

    if (Value == 180)
    {cout << "The three angles make up a triangle." << endl; }

    else 
    { cout << "Wait a minute....thats not a triangle!!! " << endl; } ;


}
