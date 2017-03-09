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
    
double LbToKg(double lb) {
    
    double kg = 0.0;
    kg = lb * 2.2;
    return kg;
}    


double KgToLb(double kg) {
    
    double lb = 0.0;
    lb = kg / 2.2;
    return lb;
}
    



int main() {
    
    int lowNum = 0;
    int highNum = 0;
    double randNum = 0.0;
    double pounds = 0.0;
    double kilograms = 0.0;
    cout << "Enter the low range for your random number generator: ";
    cin >> lowNum;
    cout << "Enter the high range for your random number generator: ";
    cin >> highNum;
    randNum = NumSwap(lowNum, highNum);
    cout << "Your random number (in pounds) is " << randNum << endl;
    kilograms = LbToKg(randNum);
    pounds = KgToLb(kilograms);
    cout << "Which is " << kilograms << " in kilograms" << endl;
    cout << "When converted back to pounds your number is " << pounds << endl;
    
    
    
    return 0;
}