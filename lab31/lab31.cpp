//Ryan Powell 3/23/17 Lab 3.1
//Phone plan cost calculator

#include <iostream> 
#include <cmath>
using namespace std;

class PhonePlan {
    
    private: 
        double dataCost = 0.0;      //Set up private variables to use in my mutator functions
        int numPhones = 0;
        int deviceCost = 0;
        double planCost = 0.0;
    public: 
        void SetDeviceCharge(int numDumb, int numSmart, int numTab);    
        void SetDataCharge(int dataNeed);
        void SetPlanCost(int corpDisc);         //Creates my accessor and mutator functions
        int GetDeviceCharge();
        double GetDataCharge();
        double GetPlanCost();
        
};

void PhonePlan::SetDeviceCharge(int numDumb, int numSmart, int numTab) {
    deviceCost = 0 * numDumb + 5 * numSmart + 10 * numTab;                  //Calculates the cost of the devices
    numPhones = numDumb + numSmart;                                         //Totals the number of phone lines
    return;
}
int PhonePlan::GetDeviceCharge() {      //Accessor for the device cost
    return deviceCost;
}
void PhonePlan::SetDataCharge(int dataNeed){        //Accepts aregument from user and calculates cost of data
    if (dataNeed > 30) {                            //depending on amount needed by user
        dataCost = 75.0 + 1.5 * (dataNeed - 10);  
    }
    else if (dataNeed > 15 ) {
        dataCost = 30.0 + 23.0 + 3.0 * (dataNeed - 15) ;
    }
    else if (dataNeed > 5) {
        dataCost = 30.0 + 8.0 + 1.5 * (dataNeed - 5);
    }
    else if (dataNeed > 1){
        dataCost = 30.0 + 5.0 + .75 * (dataNeed - 1);
    }
    else if (dataNeed > 0) {
        dataCost = 35.0;
    }
    else {
        dataCost = 30.0;
    }
    return;
}
double PhonePlan::GetDataCharge() {     //Data charge accessor
    return dataCost;
}
void PhonePlan::SetPlanCost(int corpDisc) {     //Passes values from other functions and calculates cost of plan
    if (corpDisc == 1) {                        //based on total charges and subracts discounts
        if (numPhones > 2) {
            planCost = .9 * (dataCost + deviceCost) - (3 * numPhones);
        }
        else {
            planCost = .9 * (dataCost + deviceCost);
        }
    }
    else if ((corpDisc != 1) && (numPhones > 2)) {
        planCost = (dataCost + deviceCost) - (3 * numPhones);
    }
    else {
        planCost = dataCost + deviceCost;
    }
    return;
}
double PhonePlan::GetPlanCost() {       //Plan cost accessor
    return planCost;
}

int main() {
    PhonePlan userPhone;
    int userDumb = 0;
    int userSmart = 0;
    int userTab = 0;
    int userData = 0;
    int userCorp = 0;
    
    cout << "Let's find the best price for your phone plan!" << endl;
    cout << "Enter in the number of non-smart phones you need: ";
    cin >> userDumb;
    cout << "Enter in the number of smart phones you need: ";
    cin >> userSmart;
    cout << "Enter in the number of tablets you need: ";
    cin >> userTab;
    userPhone.SetDeviceCharge(userDumb, userSmart, userTab);
    cout << "How much monthly data will you use?: ";
    cin >> userData;
    userPhone.SetDataCharge(userData);
    cout << "If you qualify for the corporate discount enter 1, if not enter 2: ";
    cin >> userCorp;
    userPhone.SetPlanCost(userCorp);
    cout << "Your device cost will be $" << userPhone.GetDeviceCharge() << endl;
    cout << "Your data cost will be $" << userPhone.GetDataCharge() << endl;
    cout << "Your total cost for your plan is $" << userPhone.GetPlanCost() << endl;
    
    
    return 0;
}
    
