//Ryan Powell 2/23/17 Lab 2.2
//Random number generator, creates a random number between 1 and 100 inclusive and outputs to screen\

#include <iostream>
//The cstdlib is added to allow use of the function rand()
#include <cstdlib>
//ctime is included to seed the random number generator so that the numbers are not simply a repeated sequence
#include <ctime>
using namespace std;

    //My function is set up outside of int main() so that it can be called multiple times
    //Since the return type of my function is a number I set it up as an int
    //We talked in class about return types of functions, int versus void types, and not using cout in the function
    int GenerateRandVar (){
        
        int randVar = 0;
        //I found the code to seed the generator based on the system time on the C++ reference site
        srand((unsigned)time(0));
        //To ensure my random number is between 1 and 100 I use modulo and add 1 to set my range
        randVar = rand() % 100 +1;
        
        return randVar;
        
    }
    
    int main() {
        
        //I initialize a variable and assign the random value from my function to it, then output it to the user
        int randNum = 0;
        randNum = GenerateRandVar();
        cout << "Your random number is " << randNum << endl;
        
        
        return 0;
    }