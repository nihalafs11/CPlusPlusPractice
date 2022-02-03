/*@author Nihal Afsal

This program validates if a birth year falls on a leap year without loops

*/

// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // declare variable
    int year=0;
    // ask user for birth year
    cout << "What is your birth year?: "; 
    // get input of birth year
    cin >> year;
    // if user enters an invalid year, tell user to enter valid birth year
    if (year < 1000 || year > 9999) { 
        cout << "Please enter a valid birth year that is 4 digits\n"; 
    } // if year is divisible by 100 then output to user that year is not a leap year
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) { 
        cout << year << " is a leap year"; 
    }
    // if year is not divisible by 4, 100, or 400, then tell user it is not a leap year
    else { 
        cout << "This is not a leap year";
    }
    // end program
    return 0; 
}
