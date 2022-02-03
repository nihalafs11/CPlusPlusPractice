/*@author Nihal Afsal

*/

// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    int year = 1700;

    if (year%100==0) { 
        cout << "This is not a leap year"; 
    }
    else if (year%4==0 || year%400==0) { 
        cout << "This is leap year"; 
    }
    else { 
        cout << "This is not a leap year"; 
    }
    // end program
    return 0; 
}