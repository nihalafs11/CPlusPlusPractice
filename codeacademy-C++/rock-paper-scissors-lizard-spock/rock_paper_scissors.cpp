/*@author Nihal Afsal

Rock, Paper, Scissors, Lizard, Spock game written in C++ based off The Big Bang Theory Show

*/

// declare preprocessors
#include <iostream> 
#include <stdlib.h>
using namespace std; 

// start main function
int main () {
    // set seed
    srand (time(NULL));
    // declare variables and random function
    string UserChoice, ComputerChoice; 
    int computer = rand() % 5 + 1;
    int user = 0;
    // Ask user for either Rock, Paper, Or Scissors 
    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";   
    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";
    cout << "4) 🦎 \n";
    cout << "5) 🖖\n";       
    cout << "shoot!\n";
    // get user input
    cin >> user;
     // conditional for outputting user choice
    if (user==1) { 
        UserChoice="Rock ✊ "; 
    }
    else if (user==2) { 
        UserChoice="Paper ✋ ";
    }
    else if (user==3) {
        UserChoice="Scissors ✌️ ";

    } 
    else if (user==4) {
        UserChoice="Lizards 🦎 ";
    } 
    else { 
        UserChoice="Spock 🖖 ";
    }
    // conditional for outputting computer choice
    if (computer==1) { 
        ComputerChoice="Rock ✊ "; 
    }
    else if (computer==2) { 
        ComputerChoice="Paper ✋ ";
    }
    else if (computer==3) {
        ComputerChoice="Scissors ✌️ ";

    } 
    else if (computer==4) {
        ComputerChoice="Lizzards 🦎 ";
    } 
    else { 
        ComputerChoice="Spock 🖖 ";
    }
    // Display User and Computer Choice
    cout << "User Chose: " << UserChoice << " Computer Chose: " << ComputerChoice << "\n"; 
    if (user==1 && computer==3) { 
        cout <<  "You Win!\n"; 
    }
    else if (user==2 && computer==1) { 
        cout << "You Win!\n"; 
    }
    else if (user==3 && computer==2) { 
        cout << "You Win!\n"; 
    }
    else if (user==1 && computer==4) { 
        cout << "You Win!\n"; 
    }
    else if (user==4 && computer==5) { 
        cout << "You Win!\n"; 
    }
    else if (user==5 && computer==3) { 
        cout << "You Win!\n"; 
    }
    else if (user==3 && computer==4) { 
        cout << "You Win!\n"; 
    }
    else if (user==4 && computer==2) { 
        cout << "You Win!\n"; 
    }
    else if (user==2 && computer==5) { 
        cout << "You Win!\n"; 
    }
    else if (user==5 && computer==1) { 
        cout << "You Win!\n"; 
    }
    // if user and computer get same value, then output tie
    else if (user==computer) { 
        cout << "You Tied!\n"; 
    }
    // if user does not have any correct values from the else if statement then user loses
    else { 
        cout << "You Lose!\n"; 
    }
    // end program
    return 0; 
}