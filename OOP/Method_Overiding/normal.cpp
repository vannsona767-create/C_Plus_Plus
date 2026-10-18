#include <iostream>
using namespace std;

class Animal{
    public:
        void sound(){
            cout << "Any sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "Spark" << endl;
        }
};
int main(){
    Animal animal;
    Dog dog;
    animal.sound();
    dog.sound();
return 0;
}