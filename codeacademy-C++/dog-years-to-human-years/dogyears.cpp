/*@author Nihal Afsal

This program calculates the age, in human years, of any dog older than 2.

*/
// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // declare string variable for dog or puppy name
    string dogname; 
    // declare variable for dog age
    int dog_age;  
    // initialize human years for dogs at 2 years old
    int early_years=21;  
    // declare variables for human years conversion for dogs
    int later_years, human_years;
    // ask user for for dog/puppy name
    cout << "What is your dog/puppy name?: "; 
    // get user input for dog/puppy name
    cin >> dogname; 
    // ask user for for dog/puppy age
    cout << "What is your dog/puppy age in years?: "; 
    // get user input for dog/puppy age
    cin >> dog_age; 
    // calculate later years because dogs are over the age of 2 years old
    later_years=(dog_age-2)*4; 
    // add later years to initial early years
    human_years=early_years+later_years; 
    // give output of human years of dog
    cout << "My name is "<< dogname << "! Ruff ruff, I am " << human_years  << " years old in human years.";
    // end program
    return 0; 
}
