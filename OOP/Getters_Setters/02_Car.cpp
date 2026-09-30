#include <iostream>
using namespace std;

class Car{

    private:

        string brand;

    public:

    // brand
        void setBrand(string b){
            brand = b;
        }
        string getBrand(){
            return brand;
        }
};

int main(){
    Car car;
    car.setBrand("Ford");
    cout << "Brand : " << car.getBrand() << endl;
return 0;
}