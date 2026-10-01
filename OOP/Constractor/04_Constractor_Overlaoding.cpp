#include <iostream>
using namespace std;
class Car{
    public:
        // attributes
        string brand;
        int year;

        // Constractors
        Car();
        Car(string b, int y);      
};
// contractor with no parameters
Car::Car(){
    brand = "Audi";
    year = 2000;
}
// constractor with parameters
Car::Car(string b, int y){
    brand = b;
    year = y;
}
int main(){
    Car car1;
    Car car2("Ford", 1997);
    Car car3("Mustang", 1067);

    cout << "===== Car #1" << endl;
    cout << "Brand : " << car1.brand << endl;
    cout << "Year  : " << car1.year << endl;

    cout << "===== Car #2" << endl;
    cout << "Brand : " << car2.brand << endl;
    cout << "Year  : " << car2.year << endl;

    cout << "===== Car #3" << endl;
    cout << "Brand : " << car3.brand << endl;
    cout << "Year  : " << car3.year << endl;
return 0;
}