#include<iostream>

using namespace std;

int main ()
{
    char P1 , P2 ;
    
    cout << "Rock Paper Scissors SHOOT!" << endl << endl;
    cout << "Two players enter thier chooice of Rock, Paper, or Scissors " << endl;
    cout << "Rock beats Paper--Paper beats Rock--Scissors beats Paper " << endl << endl;
    
    cout << "Player 1, what do you choose? " << endl;
    cin >> P1 ;

    cout << "Player 2, what is you choice? " << endl;
    cin >> P2 ;

    if (P1 == 'R' && P2 == 'R')
    {
        cout << "It's a tie! " << endl;

    }

    else if (P1 == 'R' && P2 == 'r')
    {
        cout << "It's a tie! " << endl;
    }
    else if (P1 == 'r' && P2 == 'R')
    {
        cout << "It's a tie! " << endl;
        
    }
    else if (P1 == 'r' && P2 == 'r')
    {
        cout << "It's a tie! " << endl;
    }

    else if (P1 == 'R' && P2=='P')
    {
        cout << "Player 2 Wins! " << endl;
    }
    else if (P1=='R' && P2=='p')
    {
        cout << "Player 2 Wins! " << endl;
    }
    else if (P1=='r' && P2=='P')
    {
        cout << "Player 2 Wins! " << endl;
    }
    else if (P1=='r' && P2=='p')
    {
        cout << "Player 2 Wins! " << endl;
    }

    else if (P1=='P' && P2=='')


