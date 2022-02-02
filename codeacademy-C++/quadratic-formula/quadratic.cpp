/*@author Nihal Afsal

This program solves a quadratic equation for the x‘s:


*/

//include pre processors 
#include <iostream> 
#include <cmath> 
using namespace std; 

// start main function
int main () { 
    // declare our variables
    float a, b , c, root1, root2;
    // ask user for first number
    cout << "Enter a: ";
    // get input of first number
    cin >> a;
    // ask user for second number
    cout << "Enter b: ";
    // get input of second number
    cin >> b;  
    // ask user of third number
    cout << "Enter c: ";
    // get input of third number
    cin >> c;
    // calculation of root 1 "+"
    root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    // calculation of root 2 "-"
    root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    // output results to user
    cout << "Root 1 is " << root1 << "\n" << "Root 2 is " << root2 << "\n";
    // end program   
    return 0; 
}