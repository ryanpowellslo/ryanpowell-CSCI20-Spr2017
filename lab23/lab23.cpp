//Ryan Powell 2/28/17 Lab 2.3
//Program uses swap and rand functions to generate a random number between two user-entered integers

#include <iostream>
#include <ctime> //I include ctime and cstdlib to allow my generator to seed off of the system's time
#include <cstdlib>
using namespace std;

//My function for generating the random number
int NumSwap(int firstNum = 0, int secondNum = 0) {
    int randNum = 0;
    std :: swap (firstNum, secondNum); //switches the values of the user entered variables
    int lowNum = secondNum;//the value of secondNum is now the low range
    int highNum = firstNum;//the value of firstNum is now the high range
    srand(time(0));
    randNum = (rand() % highNum) + lowNum; //sets my range for the random number generator
    
    return randNum;
    
    
}

int main() {
    int userNum1 = 0;
    int userNum2 = 0;
    cout << "Enter the low range for your random number generator followed by the high range:" << endl;
    cin >> userNum1;
    cin >> userNum2;
    int userRandNum = NumSwap (userNum1, userNum2); // calls my random number function and passes the arguments
    cout << "A random number between " << userNum1 << " and " << userNum2 << " is " << userRandNum << endl;
    
    
    return 0;
}