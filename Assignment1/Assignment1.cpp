//Ryan Powell 2/16/17
//Assignment 1 Calculators

#include <iostream>
#include <string>
using namespace std;

    //Here I set up my structure which creates a generic template for any employee info that would be needed for payroll
    struct EmpInfo{ 
       string empName = "";
       float hourlyWage = 0.0;
       float hoursWorked = 0.0;
           
    } ;
    
    int main(){
     //I created separate variables for net and gross pay as those can be solved with an equation derived from EmpInfo variables
     float grossPay = 0.0;
     float netPay = 0.0;
     //this is where I create my object to represent the employee in this program
     EmpInfo emp1;    
     cout << "Enter employee name: " << endl;
     //by using the getline function I can receive the emplyee's whole name even if there is whitespace
     getline(cin, emp1.empName);
     //next I prompt the user to enter in the employee's pay information
     cout << "Enter employee hourly wage: $";
     cin >> emp1.hourlyWage;
     cout << "Enter hours worked by employee this week: ";
     cin >> emp1.hoursWorked;
     //once all employee data is gathered I make the final calculations then output it all in an organized list
     grossPay = emp1.hourlyWage * emp1.hoursWorked;
     netPay = (grossPay - 130) * .87;
     cout << "Employee name: " << emp1.empName << "   Employee wage: $" << emp1.hourlyWage << "/hr." << endl;
     cout << "Gross pay: $" << grossPay << "   Net pay: $" << netPay << endl;
     
        return 0;
    }