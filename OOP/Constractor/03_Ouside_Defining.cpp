#include <iostream>
using namespace std;

class Car{
    public:
        string name;
        Car(string n);    // Constractor declaration
};

// outside constractor and definition
Car::Car(string n){ 
    name = n;
}
int main(){

    Car car("Sona");    // argument is "Sona"
    cout << "Hello my name is "<< car.name <<" Today, We learn how to define the constractor outside the class" << endl;
return 0;
}

// this is also outside definition
// Car::Car(string n){ 
//     name = n;
// }