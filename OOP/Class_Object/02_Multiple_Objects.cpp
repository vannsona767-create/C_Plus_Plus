#include <iostream>
using namespace std;

class Car{
    public:     // access speciffier
        string brand;
        string model;
        int year;
};

int main(){
    Car carObj1;    // 1st object
    carObj1.brand ="BMW";
    carObj1.model = "X5";
    carObj1.year = 1969;

    Car carObj2;    // 2nd object
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1999;
    
    // 1st car
    cout << "======= 1st car =======" << endl;
    cout << "Brand : " << carObj1.brand << endl;
    cout << "Model : " << carObj1.model << endl;
    cout << "Year  : " << carObj1.year << endl;
    
    // 2nd car
    cout << "======= 2nd car =======" << endl;
    cout << "Brand : " << carObj2.brand << endl;
    cout << "Model : " << carObj2.model << endl;
    cout << "Year  : " << carObj2.year << endl;

return 0;
}