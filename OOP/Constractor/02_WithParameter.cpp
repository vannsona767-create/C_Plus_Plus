#include <iostream>
using namespace std;

class Myclass{

    public:     // access specifier
        string brand;   // attribute
        int year;
        
        Myclass(string b, int y){
            brand = b;
            year = y;
        }
};

int main(){

    Myclass myObject1("Ford", 2000);     // arguments

    cout << "Brand : " << myObject1.brand << endl;   // brand = b, so b = Ford => myObject.brand = Ford
    cout << "Year  : " << myObject1.year << endl;

    Myclass myObject2("RangRover", 1998);

    cout << "Brand : " << myObject2.brand << endl;   
    cout << "Year  : " << myObject2.year << endl;
return 0;
}