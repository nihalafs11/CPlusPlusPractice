/*@author Nihal Afsal

This program converts Earth weight pounds (lb) to Mars weight pounds (lb)

*/
// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // declare variables
    double earthlb, marslb;
    // ask user for input for earth weight
    cout << "Give an item weight on earth in pounds (lb): "; 
    // get user input for earth weight
    cin >> earthlb; 
    // calculate item weight on earth to item weight on mars. 
    // Gravity on Mars is 38 percent of Earth's gravity
    marslb=earthlb*0.38;
    // give output of mars weight to user
    cout << "Your item weight on mars would weigh "  << marslb << " pounds (lb)!\n"; 
    // end program
    return 0; 
}
