#include <iostream>
using namespace std;

// parent class
class Vehicle{
    public:
        string brand = "Ford";
};
// child class
class Car : public Vehicle{
    public: 
        string  model = "Mustang";
};
// child class
class Year : public Car{
    public:
        int year = 2000;
};
class GetAll : public Year{
};
int main(){
    GetAll getAll;
    // + : to connect each string together
    cout << getAll.brand + " " + getAll.model << " " << getAll.year << endl;
return 0;
}