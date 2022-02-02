/*@author Nihal Afsal

This program asks user for input of 3 South American foreign currency and then 
converts the 3 amounts entered by the user, and displays the total amount of USD.

*/

// include preprocessors 
#include <iostream> 
using namespace std; 

// start main function
int main () { 
    // declare variables
    double pesos, reais, soles, dollars=0;
    // ask user for Colombian Pesos amount
    cout << "Enter number of Colombian Pesos: ";
    // get input of user for Colombian Pesos amount 
    cin >> pesos;
    // ask user for Brazilian Reais amount
    cout << "Enter number of Brazilian Reais: ";
    // get input of user for Brazilian Reais amount 
    cin >> reais;
    // ask user for Peruvian Soles amount
    cout << "Enter number of Peruvian Soles: ";
    // get input of user for Peruvian Soles amount  
    cin >> soles;
    // calculation for converting all south american currencies into USD
    dollars=(pesos*0.00025)+(reais*0.19)+(soles*0.26);
    // display output of converted south american currencies into USD
    cout << "US Dollars = $" << dollars << "\n"; 
    // end program
    return 0; 
}