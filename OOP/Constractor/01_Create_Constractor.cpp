#include <iostream>
using namespace std;

class Myclass{
    public: 
        Myclass(){  // this method will be called automatically when the object of class is created, this is called "Constractor"
            cout << "Today, I learn to create constractor" << endl;
        }
};

int main(){
    Myclass myObject;   // create the object of class, = call the constractor
return 0;
}