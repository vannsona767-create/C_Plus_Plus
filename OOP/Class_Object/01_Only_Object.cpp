
#include <iostream>
using namespace std;

class myClass{  // The class
    public:     // Access specifier
        int myNum;  // Attribute (int)
        string myString ;   // Attribute (string)
};

int main(){
    
    myClass myObject;   // create an object of myClasss

    // Access attribute and set the values
    myObject.myNum = 18;
    myObject.myString = "Vann Sona";

    cout << "Hello guys! my name is "<< myObject.myString <<". I'm "<< myObject.myNum <<"." << endl;

return 0;
}