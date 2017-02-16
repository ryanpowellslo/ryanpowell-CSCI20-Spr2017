//Ryan Powell 2/16/17
//Assignment 1 Calculators

#include <iostream>
#include <string>
using namespace std;

    struct EmpInfo{
       string empName = "";
       float hourlyWage = 0.0;
       float hoursWorked = 0.0;
           
    } ;
    
    int main(){
     
     float grossPay = 0.0;
     float netPay = 0.0;
     EmpInfo emp1;    
     cout << "Enter employee name: " << endl;
     getline(cin, emp1.empName);
     cout << "Enter employee hourly wage: $";
     cin >> emp1.hourlyWage;
     cout << "Enter hours worked by employee this week: ";
     cin >> emp1.hoursWorked;
     grossPay = emp1.hourlyWage * emp1.hoursWorked;
     netPay = (grossPay - 130) * .87;
     cout << "Employee name: " << emp1.empName << "   Employee wage: $" << emp1.hourlyWage << "/hr." << endl;
     cout << "Gross pay: $" << grossPay << "   Net pay: $" << netPay << endl;
     
        return 0;
    }