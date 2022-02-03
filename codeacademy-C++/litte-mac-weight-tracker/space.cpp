/*@author Nihal Afsal

Little Mac is an interplanetary space boxer, who is trying to win championship belts
for various weight categories on other planets within the solar system. This program 
helps Little Mac keep track of his target weight. 

Weight Given: 

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19

*/

// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // declare variables
    int planet; 
    double weight;
    // ask user for earth weight
    cout << "What is your Earth Weight in pounds (lb): "; 
    // get input of earth weight
    cin >> weight; 
    // ask user what planet they would like to fight on
    cout << "1.	Mercury\n";	
    cout << "2.	Venus\n";		
    cout << "3.	Mars\n";		
    cout << "4.	Jupiter\n";	
    cout << "5.	Saturn\n";		
    cout << "6.	Uranus\n";		
    cout << "7.	Neptune\n";
    cout << "What planet would you like to fight on?: ";
    // get input of planet		
    cin >> planet;
    // use switch statement to assign planet, calculate weight, and output data to user
    switch (planet) {
    case 1: 
        cout << "Litte Mac your weight on Mercury is " << weight*0.38 << " pounds (lb)!\n"; 
        break;
    case 2: 
        cout << "Litte Mac your weight on Venus is " << weight*0.91 << " pounds (lb)!\n"; 
        break;
    case 3: 
        cout << "Litte Mac your weight on Mars is " << weight*0.38 << " pounds (lb)!\n"; 
        break;
    case 4: 
        cout << "Litte Mac your weight on Jupiter is " << weight*2.34 << " pounds (lb)!\n"; 
        break;
    case 5: 
        cout << "Litte Mac your weight on Saturn is " << weight*1.06 << " pounds (lb)!\n"; 
        break;
    case 6: 
        cout << "Litte Mac your weight on Uranus is " << weight*0.92 << " pounds (lb)!\n"; 
        break;
    case 7: 
        cout << "Litte Mac your weight on Neptune is " << weight*1.19 << " pounds (lb)!\n"; 
        break;
        // error out message if user inputs a number out of 1-7 range
    default:
        cout << "Sorry Litte Mac! That is an incorrect input! Please try again.\n";
        break;
    }
    // end program
    return 0; 
}