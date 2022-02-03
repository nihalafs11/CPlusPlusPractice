/*@author Nihal Afsal

A Magic 8 Ball program that outputs a random fortune each time it executes.

*/

// declare preprocessors
#include <cstdlib>
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // set seed if random number generator
    srand(time(NULL));
    // declare variables and random function to give us random outputs
    int answer = rand() % 10; 
    // display Magic 8 Ball
    cout << "MAGIC 8-BALL:\n";
    // display output depenind on random number
    if (answer==0) { 
        cout << "It is certain.\n";
    }
    else if (answer==1) {
        cout << "As I see it, yes.\n";
    }
    else if (answer==2) {
        cout << "Signs point to yes.\n";
    }
    else if (answer==3) {
        cout << "Concentrate and ask again.\n";
    }
    else if (answer==4) {
        cout << "My reply is no.\n";
    }
    else if (answer==5) {
        cout << "Cannot predict now.\n";
    }
    else if (answer==6) {
        cout << "Better not tell you now.\n";
    }
    else if (answer==7) {
        cout << "It is decidedly so.\n";
    }
    else if (answer==8) {
        cout << "Without a doubt.\n";
    }
    else if (answer==9) {
        cout << "Don't count on it.\n";
    }    
    else { 
        cout << "Very doubtful.\n";
    }
    // end program
    return 0; 
}
