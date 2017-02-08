//Lab 14 Coinstar Program
//Ryan Powell 2/7/17

#include <iostream>
using namespace std;

int main() {
    
    int coinsInput = 0;
    int quarters = 0;
    int dimes = 0; 
    int nickels = 0;
    int pennies = 0;
    double moneyPaid = 0;
    
    cout << "Enter in cash calue of coins to be counted in cents : " << endl;
    cin >> coinsInput;
    moneyPaid = static_cast<double>(coinsInput) * 0.891 / 100;
    quarters = coinsInput / 25;
    coinsInput = coinsInput % 25;
    dimes = coinsInput / 10;
    coinsInput = coinsInput % 10;
    nickels = coinsInput / 5;
    coinsInput = coinsInput % 5;
    pennies = coinsInput / 1;
    cout << "You deposited " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." <<endl;
    cout << "You receive a voucher for $" << moneyPaid << ". Thank you!" << endl;
    
    
    //I'm having a hard time reducing the sig figs on moneyPaid, every time I try to use the % operator with that variable i get an error
    
    return 0;
}