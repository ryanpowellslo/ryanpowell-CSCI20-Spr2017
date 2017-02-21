//Ryan Powell 2/21/17
//Lab 2.1 Calling Functions

    //In this lab the cmath library needs to be added to use more complex mathematical functions
#include <iostream>
#include <cmath>
using namespace std;



int main () {
    
        //Variables are declared and initialized, must be floats to accomadate non integers
    float windTemp = 0.0;
    float windVel = 0.0;
    float oldStyle = 0.0;
    float newStyle = 0.0;
    float styleDiff = 0.0;
    
        //Values for windspeed and temperature are received from user    
    cout << "Enter initial windspeed: ";
    cin >> windVel;
    cout << "Enter intial temperature in Farenheit: ";
    cin >> windTemp;
        //The calculations for new and old style windchills, as well as their difference, are initialized using input from user
    oldStyle = 0.081 * (3.71 * sqrt(windVel) + 5.81 - 0.25 * windVel) * (windTemp - 91.4) + 91.4;
    newStyle = 35.74 + .6215 * windTemp - 35.75 * pow(windVel, 0.16) + .4275 * windTemp * pow(windVel, 0.16);
    styleDiff = oldStyle - newStyle;
        //The resulting values output to the screen
    cout << "Windspeed: " << windVel << endl;
    cout << "Old Style Wind Chill: " << oldStyle << endl;
    cout << "New Style Wind Chill: " << newStyle << endl;
    cout << "Style Difference (Old - New): " << styleDiff << endl;
    
    
    
    
    
    return 0;
}