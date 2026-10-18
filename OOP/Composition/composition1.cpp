
// coposition represents Has-A
#include <iostream>
using namespace std;

class Engine{
    public:
        void start(){
            cout << "Engine starting..." << endl;
        }
};
class Battery{
    public:
        void supplyPower(){
            cout << "Battery supplying power..." << endl;
        }
};
class AirConditioner{
    public:
        void turnOn(){
            cout <<  "AC turned on..." << endl;
        }
};
class Car{
    private:
        Engine engine;
        Battery battery;
        AirConditioner airconditioner;
    public:
        void mix(){
            engine.start();
            battery.supplyPower();
            airconditioner.turnOn();
        }
};

int main(){
    Car car;
    car.mix();
return 0;
}