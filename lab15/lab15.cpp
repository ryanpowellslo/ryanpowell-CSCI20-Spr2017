//Ryan Powell 2/16/17
//Lab 15 Mad Libs

#include <iostream> 
#include <string>
using namespace std;


int main(){
    
    string lib1 = "";
    string lib2 = "";
    string lib3 = "";
    string lib4 = "";
    string lib5 = "";
    
    cout << "Welcome to Mad Libs! Let's get started!" << endl;
    cout << "First we'll need a noun: ";
    cin >> lib1;
    cout << "Next let's get an adjective: ";
    cin >> lib2;
    cout << "How about the name of a city: ";
    cin >> lib3;
    cout <<"Almost done! Give me a  past tense verb: ";
    cin >> lib4;
    cout << "And last but not least enter in your favorite number: ";
    cin >> lib5;
    cout << "Here we go!" << endl;
    cout << "My " << lib1 << " is so " << lib2 << ", and all of my friends love it!" << endl;
    cout << "I took it with me to " << lib3 << " last summer where I " << lib4 << " with it everywhere!" << endl;
    cout << "I wouldn't sell my " << lib2 << " " << lib1 << ", even for $" << lib5 << endl;
    
    
    
    return 0;
}