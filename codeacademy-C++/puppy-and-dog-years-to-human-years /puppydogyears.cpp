/*@author Nihal Afsal

This program calculates the age, in human years, of any dog or puppy

*/
// declare preprocessors
#include <iostream> 
using namespace std; 

// start main function
int main () {
    // declare variable for dog or puppy name
    string dogname; 
    // declare variable for dog or puppy age
    int dog_age;  
    // initialize human years for dogs at 2 years old
    int early_years=21;  
    // declare variables for human years conversion for dogs over the age of 2 human years
    int later_years; 
    // declare variable for storing calculation of human years
    double human_years;
    // ask user for for dog/puppy name
    cout << "What is your dog/puppy name?: "; 
    // get user input for dog/puppy name
    cin >> dogname; 
    // ask user for for dog/puppy age
    cout << "What is your dog/puppy age in years?: "; 
    // get user input for dog/puppy age
    cin >> dog_age; 
    // convert dog age into months
    dog_age=dog_age*12;  
     // if / else conditional to determine if dog is a puppy or dog
     // if dog age is less than 2 years then calculate human years
    if (dog_age < 24) { 
        human_years = 0.875*12; 
    }
    // else statement when dog age is over the years of 2 years old
    else { 
        // calculate later years because dogs are over the age of 2 years old
        later_years=((dog_age-24)*4)/12; 
        // add later years to initial early years
        human_years=early_years+later_years; 
    } 
    // give output of human years of dog
    cout << "My name is "<< dogname << "! Ruff ruff, I am " << human_years  << " years old in human years."; 
    // end program
    return 0; 
}
