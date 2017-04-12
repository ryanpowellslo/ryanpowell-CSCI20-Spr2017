//Ryan Powell 4/11/17 Lab 4.1
//Single Array Lab, creating a single array and several functionsto reference the array

#include <iostream>
using namespace std;









class ArrayTools {                  //class contains my constructor and mutators for examining and manipulating the array
    
    
        
    private:
        int maxVal = 0;             //My private values make it easier for me to access the array by creating a private
        int minVal = 0;             //member variable array
        int sumVal = 0;
        int cntEven = 0;
        int cntOdd = 0;
        int specVal = 0;
        const int NUM_VAL = 10;
        int funcArray[10];
        
    public:
        void MyArray(int userArray[]);
        void Print ();
        int Find_min ();
        int Find_max ();
        int Search (int specVal);
        int Find_sum ();
        void Is_sorted ();
        void Even_odd();
        
        
};

void ArrayTools::MyArray(int userArray[]) {   //Setting up my constructor is still giving me problems
    
    for(int i = 0; i < NUM_VAL; i++){       //I'll have to see you at your office hours, the compiler is very confusing
        funcArray[i] = userArray[i];
    }

    return;
}




void ArrayTools::Print () {         //Prints out array elements
    
    for(int i = 0; i < NUM_VAL; i++){
        cout << funcArray[i] << endl;
        
    }

    return;
}


int ArrayTools::Find_min() {        //Compares element values to find min
    
    minVal = funcArray[0];
    for(int i = 0; i < NUM_VAL; i++){
        if(minVal > funcArray[i]){
            minVal = funcArray[i];
        }
    }

    return minVal;
}

int ArrayTools::Find_max() {        //Compares element values to find max
    
    maxVal = funcArray[0];
    for(int i = 0; i < NUM_VAL; i++) {
        if(maxVal < funcArray[i]){
            maxVal = funcArray[i];
        }
    }
    return maxVal;
}

int ArrayTools::Search (int specVal){           //Attempts to find a specific value in the array
    
    for(int i = 0; i < NUM_VAL; i++){
        if(funcArray[i] == specVal){
            return i;
        }
    }
    return -1;
}

int ArrayTools::Find_sum(){                 //Sums all the values of each element in the array
    
    for(int i = 0; i < NUM_VAL; i++){
        sumVal = sumVal + funcArray[i];
    }

    return sumVal;
}

void ArrayTools::Is_sorted(){               //Checks to make sure each element is a lesser value than the next
    
    for(int i =0; i < NUM_VAL; i++){
        while(funcArray[i] < funcArray[i+1]){
            if(i == 8){
                cout << "In order" << endl;
                return;
            }
        }
    }
    cout << "Not in order" << endl;
    return;
}

void ArrayTools::Even_odd(){            //Keeps track of and outputs number of even and odd values
    
    for(int i = 0; i < NUM_VAL; i++){
        if(funcArray[i] % 2 == 0){
            cntEven++;
        }
        else {
            cntOdd++;
        }
    }
    cout << "Evens: " << cntEven << "   " << "Odds: " << cntOdd << endl;
    return;
}






int main() {
  
   const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a;
    a.MyArray(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min()<<endl;
    cout<<"Max: "<<a.Find_max()<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10, location: "<<a.Search(10)<<endl;
    cout<<"Sorted? ";
    a.Is_sorted();
    a.Even_odd(); 
    

    return 0;
}