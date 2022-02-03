/*@author Nihal Afsal

The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four 
school Houses each new student belongs most to:

* gryffindor
* hufflepuff
* ravenclaw
* slytherin

This program program that asks the user some questions and places them into one of the four 
Houses based on their answers!

*/

// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {

    // declare variables
    string house; 
    int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0, max=0; 
    int answer1, answer2, answer3, answer4; 
    // Print out quiz name
    cout << "The Sorting Hat Quiz!\n"; 
    // Print out first question
    cout << "Q1) When I'm dead, I want people to remember me as: \n";
    cout << "1) The Good\n"; 
    cout << "2) The Great\n"; 
    cout << "3) The Wise\n";
    cout << "4) The Bold\n";
    // get input of first question
    cin >> answer1; 
    // start conditional for first answer
    if (answer1 == 1) { 
        // increment 1 for hufflepuff if answer 1 is chosen
        hufflepuff++;
    }
    else if (answer1 == 2){ 
        // increment 1 for slytherin if answer 2 is chosen
        slytherin++; 
    }
    else if (answer1 == 3){ 
        // increment 1 for ravenclaw if answer 3 is chosen
        ravenclaw++;
    }
    else if (answer1 == 4){ 
        // increment 1 for gryffindor if answer 4 is chosen
        gryffindor++;
    }
     // if user types incorrect input output an error message
    else { 
        cout << "Invalid input.\n";
    }
    // Print out second question
    cout << "Q2) Dawn or Dusk?\n";
    cout << "1) Dawn\n"; 
    cout << "2) Dusk\n";
    // get input of second question
    cin >> answer2;
        // start conditional for second answer
    if (answer2 == 1) { 
        // increment 1 for ravenclaw if answer 1 is chosen
        ravenclaw++;
    }
    else if (answer2 == 2){ 
        // increment 1 for slytherin if answer 2 is chosen
        slytherin++; 
    } // if user types incorrect input output an error message
    else { 
        cout << "Invalid input.\n";
    }
    // Print out third question
    cout << "Q3) Which kind of instrument most pleases your ear?\n";
    cout << "1) The violin\n"; 
    cout << "2) The trumpet\n"; 
    cout << "3) The piano\n";
    cout << "4) The drum\n";
    // get input of third question
    cin >> answer3; 
    // start conditional for third answer
    if (answer3 == 1) { 
        // increment 1 for slytherin if answer 1 is chosen
        slytherin++;
    }
    else if (answer3 == 2){ 
        // increment 1 for hufflepuff if answer 2 is chosen
        hufflepuff++; 
    }
    else if (answer3 == 3){ 
        // increment 1 for ravenclaw if answer 3 is chosen
        ravenclaw++;
    }
    else if (answer3 == 4){ 
        // increment 1 for gryffindor if answer 4 is chosen
        gryffindor++;
    }
     // if user types incorrect input output an error message
    else { 
        cout << "Invalid input.\n";
    }
    // Print out fourth question
    cout << "Q4) Which road tempts you most?\n";
    cout << "1) The wide, sunny grassy lane\n"; 
    cout << "2) The narrow, dark, lantern-lit alley\n"; 
    cout << "3) The twisting, leaf-strewn path through woods\n";
    cout << "4) The cobbled street lined (ancient buildings)\n";
    // get input of fourth question
    cin >> answer4; 
    // start conditional for fourth answer
    if (answer4 == 1) { 
        // increment 1 for hufflepuff if answer 1 is chosen
        hufflepuff++;
    }
    else if (answer4 == 2){ 
        // increment 1 for slytherin if answer 2 is chosen
        slytherin++; 
    }
    else if (answer4 == 3){ 
        // increment 1 for gryffindor if answer 3 is chosen
        gryffindor++;
    }
    else if (answer4 == 4){ 
        // increment 1 for ravenclaw if answer 4 is chosen
        ravenclaw++;
    }
     // if user types incorrect input output an error message
    else { 
        cout << "Invalid input.\n";
    }
    // Find highest answer
    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
        }
    if (slytherin > max) { 
        max = slytherin;
        house = "Slytherin";
    }
    // Output users house
    cout << house << "!\n";
    // end program
    return 0; 
}