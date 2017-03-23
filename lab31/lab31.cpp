//Ryan Powell 3/23/17 Lab 3.1
//Phone plan cost calculator

#include <iostream> 
#include <cmath>
using namespace std;

class PhonePlan {
    
    private: 
        const int dumbCost = 0;
        const int smartCost = 5;
        const int tabCost = 10;
        double dataCost = 0.0;
        int numPhones = 0;
        int deviceCost = 0;
        double planCost = 0.0;
    public: 
        void SetDeviceCharge(int numDumb, int numSmart, int numTab);
        void SetDataCharge(int dataNeed);
        void SetPlanCost(int corpDisc);
        int GetDeviceCharge();
        double GetDataCharge();
        double GetPlanCost();
        
}

void PhonePlan::SetDeviceCharge(int numDumb, int numSmart, int numTab) {
    deviceCost = 0 * numDumb + 5 * numSmart + 10 * numTab;
    numPhones = numDumb + numSmart;
    return;
}
int PhonePlan::GetDeviceCharge() {
    return deviceCost;
}
void PhonePlan::SetDataCharge(int dataNeed){
    if (dataNeed >= 30) {
        dataCost = 75.0 + 1.5 * (dataNeed - 10);  
    }
    else if ((dataNeed < 30) && (dataNeed >= 15) ) {
        dataCost = 30.0 + 23.0 + 3.0 * (dataNeed - 15) ;
    }
    else if ((dataNeed < 15) && (dataNeed >= 5)) {
        dataCost = 30.0 + 8.0 + 1.5 * (dataNeed - 5);
    }
    else if ((dataNeed < 5) && (dataNeed >= 1)){
        dataCost = 30.0 + 5.0 + .75 * (dataNeed - 1);
    }
    else if ((dataNeed < 1) && (dataNeed > 0)) {
        dataCost = 35.0;
    }
    else {
        dataCost = 30.0;
    }
}
double PhonePlan::GetDataCharge() {
    return dataCost;
}
void PhonePlan::SetPlanCost(int corpDisc) {
    if (corpDisc == 1) {
        planCost = .9 * (dataCost + deviceCost);
    }
}
    
