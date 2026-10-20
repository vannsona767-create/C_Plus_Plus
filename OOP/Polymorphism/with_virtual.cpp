#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound() const{
            cout << "Animal makes sound" << endl;
        }
        virtual ~Animal() = default;
};
// dog
class Dog : public Animal{
    public:
        void sound() const override{
            cout << "Dog barks" << endl;
        }
};
int main(){
    Dog dog;
    Animal * animal = &dog;

    animal->sound();

return 0;
}