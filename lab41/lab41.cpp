//Ryan Powell 4/11/17 Lab 4.1
//Single Array Lab, creating a single array and several functionsto reference the array

#include <iostream>
using namespace std;









class ArrayTools {
    
    public:
        void MyArray(int userArray[NUM_VAL]);
        void Print ();
        int Find_min ();
        int Find_max ();
        int FindVal ();
        int Search ();
        int Find_sum ();
        void Is_sorted ();
        
    private:
        int maxVal = 0;
        int minVal = 0;
        int sumVal = 0;
        int cntEven = 0;
        int cntOdd = 0;
        int specVal = 0;
        int size = 10;
        const int NUM_VAL = 10;
        int funcArray[10];
        
        
};

void ArrayTools::MyArray(int userArray[NUM_VAL]) {
    
    int i = 0;
    for(i = 0; i < NUM_VAL; i++){
        funcArray[i] = userArray[i];
    }

    return;
}




void ArrayTools::Print () {
    int i = 0;
    for(i = 0; i < NUM_VAL; i++){
        cout << funcArray[i] << endl;
        
    }

    return;
}

int main() {
  
   const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    

    return 0;
}