//Ryan Powell 3/28/17 Lab 3.2
//Income tax and tax refund calculator

#include <iostream>
using namespace std;


class TaxCalc {
    
    private:
        double tax;
        
}

void SetTax(int userMarried, double userWageAmt) {
    int userMarStat = userMarried;
    double userWage = userWageAmt;
    double tax = 0.0;
    double adjGrossInc = 0.0;
    
    if (userMarStat == 1) {
        adjGrossInc = userWage - 3900.0;
        if (adjGrossInc >= 87851) {
            tax = 0.28 * (adjGrossInc - 87850) + 17891.25;
        }
        if (adjGrossInc >= 36251) {
            tax = 0.25 * (adjGrossInc - 36250) + 4991.25;
        }
        if (adjGrossInc >= 8926) {
            tax = 0.15 * (adjGrossInc - 8925) + 892.50;
        }
        if (adjGrossInc >= 0) {
            tax = 0.1 * adjGrossInc;
        }
    
    }
    else if (userMarStat == 2) {
        adjGrossInc = userWage - 7800;
        if (adjGrossInc >= 72501) {
            tax = .28 * (adjGrossInc - 72500) + 9982.50;
        }
        if (adjGrossInc >= 17851) {
            tax = 0.15 * (adjGrossInc - 17850) + 1785.0;
        }
        if (adjGrossInc >= 0) {
            tax = 0.1 * adjGrossInc;
        }
        
    }
    else {
        cout << "Incorrect marital status" << endl;
        return;
    }
    return;
        
    }

double CalcRefund (double userAmtWithheld){
    double tax = 0.0;
    double refundOwed = 0.0;
    double taxOwed = 0.0;
    double userWithheld = userAmtWithheld;
    int x = 0;
    x = (userWithheld >= tax) ? 1 : 2;
    switch (x) {
        
        case 1:
        refundOwed = userWithheld - tax;
        return refundOwed;
        break;
        
        case 2:
        taxOwed = tax - userWithheld;
        return taxOwed;
        break;
        
        default:
        return -1;
        break;
            }
    return;
    }
    

    
    
    
int main() {
    
    int maritalStatus = 0;
    double wageAmt = 0.0;
    double amtWithheld = 0.0;
    cout << "Enter marital status. 1 for single, 2 for married: ";
    cin >> maritalStatus;
    cout << "Enter wage amount: ";
    cin >> wageAmt;
    cout << "Enter in the amount of withholdings: ";
    cin >> amtWithheld;
    SetTax(maritalStatus, wageAmt);
    cout << CalcRefund(amtWithheld);
    
    
    
    
    
    return 0;
}
    