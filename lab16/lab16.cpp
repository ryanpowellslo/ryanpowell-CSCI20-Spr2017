//Ryan Powell 2/16/17
//Lab 1.6 Objecta

#include <iostream>
#include <string>
using namespace std;
    
    //Creating the structure that assigns the attributes for each monster
    struct MonsterStruct {
        string monsterName = "";
        string monsterHead = "";
        string monsterEyes = "";
        string monsterEars = "";
        string monsterNose = "";
        string monsterMouth = "";
        
    };
    
    int main() {
        
        //Here I create 4 monster objects from MonsterStruct
        MonsterStruct monst1;
        MonsterStruct monst2;
        MonsterStruct monst3;
        MonsterStruct monst4;
        
        //My first object is created using instructor input
        monst1.monsterName = "OneMonster";
        monst1.monsterHead = "Zombus";
        monst1.monsterEyes = "Spritem";
        monst1.monsterEars = "Vegitas";
        monst1.monsterNose = "None";
        monst1.monsterMouth = "Wackus";
        
        //The second object is created using my own input
        monst2.monsterName = "Ryan";
        monst2.monsterHead = "Brown";
        monst2.monsterEyes = "Hazel";
        monst2.monsterEars = "Round";
        monst2.monsterNose = "Round";
        monst2.monsterMouth = "Plump";
        
        //My third and fourth monsters are created with user input
        cout << "Enter Monster 3's name: ";
        cin >> monst3.monsterName;
        cout << "Enter Monster 3's Head Type: ";
        cin >> monst3.monsterHead;
        cout << "Enter Monster 3's Eye Color: ";
        cin >> monst3.monsterEyes;
        cout << "Enter Monster 3's Ear Type: ";
        cin >> monst3.monsterEars;
        cout << "Enter Monster 3's Nose Type: ";
        cin >> monst3.monsterNose;
        cout << "Enter Monster 3's Mouth Type: ";
        cin >> monst3.monsterMouth;
        
        cout << "Enter Monster 4's name: ";
        cin >> monst4.monsterName;
        cout << "Enter Monster 4's Head Type: ";
        cin >> monst4.monsterHead;
        cout << "Enter Monster 4's Eye Color: ";
        cin >> monst4.monsterEyes;
        cout << "Enter Monster 4's Ear Type: ";
        cin >> monst4.monsterEars;
        cout << "Enter Monster 4's Nose Type: ";
        cin >> monst4.monsterNose;
        cout << "Enter Monster 4's Mouth Type: ";
        cin >> monst4.monsterMouth;
        
        //Now I simply output each monster's info in list form
        cout << monst1.monsterName << ": " << monst1.monsterHead << ", " << monst1.monsterEyes << ", " << monst1.monsterEars;
        cout << ", " << monst1.monsterNose << ", " << monst1.monsterMouth << endl;
        
        cout << monst2.monsterName << ": " << monst2.monsterHead << ", " << monst2.monsterEyes << ", " << monst2.monsterEars;
        cout << ", " << monst2.monsterNose << ", " << monst2.monsterMouth << endl;
        
        cout << monst3.monsterName << ": " << monst3.monsterHead << ", " << monst3.monsterEyes << ", " << monst3.monsterEars;
        cout << ", " << monst3.monsterNose << ", " << monst3.monsterMouth << endl;
        
        cout << monst4.monsterName << ": " << monst4.monsterHead << ", " << monst4.monsterEyes << ", " << monst4.monsterEars;
        cout << ", " << monst4.monsterNose << ", " << monst4.monsterMouth << endl;
        return 0;
    }