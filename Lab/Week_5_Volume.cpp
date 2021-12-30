#include<iostream>

using namespace std;

int main()
{ 
    double radius , height ;
    double volume ;

    cout << "Please enter the radius:" ;
    cin >> radius ;
    cout << "Please enter the height:" ;
    cin >> height ;
    volume = 3.14 * radius * radius * height ;

    cout << "The Volume is: " << volume << endl;

}