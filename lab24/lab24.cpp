//Ryan Powell 3/7/17 Lab 2.4
//This program generates a random number within a user given range
//The random number is then calculated as weight in lb's and its equivalent in kg's is calculated

#include <iostream>
#include <ctime> //ctime and cstdlib included for random number generator
#include <cstdlib>
using namespace std;

int NumSwap(int firstNum = 0, int secondNum = 0) {
    int randNum = 0;
    std :: swap (firstNum, secondNum); //switches the values of the user entered variables
    int lowNum = secondNum;//the value of secondNum is now the low range
    int highNum = firstNum;//the value of firstNum is now the high range
    srand(time(0));
    randNum = (rand() % highNum) + lowNum; //sets my range for the random number generator
    
    return randNum;
}
    
double LbToKg(double lb) {  //function to calculate kilograms when an argument for pounds is passed
    
    double kg = 0.0;
    kg = lb * 2.2;
    return kg;  //returns the value back to int main()
}    


double KgToLb(double kg) {    //function to calculate pounds when an argument for kilograms is passed
    
    double lb = 0.0;
    lb = kg / 2.2;
    return lb;  //returns the value back to int main()
}
    



int main() {
    //declare and initialize all variables needed to store values from functions
    int lowNum = 0;
    int highNum = 0;
    double randNum = 0.0;
    double pounds = 0.0;
    double kilograms = 0.0;
    cout << "Enter the low range for your random number generator: ";
    cin >> lowNum;
    cout << "Enter the high range for your random number generator: ";
    cin >> highNum;
    randNum = NumSwap(lowNum, highNum); //calls my random number generator
    cout << "Your random number (in pounds) is " << randNum << endl;
    kilograms = LbToKg(randNum); // calls my kilogram calculator
    pounds = KgToLb(kilograms); // calls my pound calculator
    cout << "Which is " << kilograms << " in kilograms" << endl;
    cout << "When converted back to pounds your number is " << pounds << endl;
    
    
    
    return 0;
}