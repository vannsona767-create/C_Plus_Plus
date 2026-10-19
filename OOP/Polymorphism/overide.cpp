#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound() const{
            cout << "Animal makes sound" << endl;
        }
        virtual ~Animal() = default;

        virtual void make() const{};
};
class Dog : public Animal{
    public:
        void sound() const override{
            cout << "Dog barks" << endl;
        }
        void make() const override{
            cout << "make" << endl;
        }
};
class Cat : public Animal{
    public:
        void sound() const override{
            cout << "Meow meow" << endl;
        }
};
int main(){
    // creat the object
    Dog dog;
    Cat cat;
    //  create object "animal" and "animal2" by pointer to dog and cat object that overrided from Animal class
    Animal * animal = &dog;
    Animal * animal2 = &cat;

    animal->sound();
    animal2->sound();
    animal->make(); // error if in Animal has no member 'make()'
return 0;
}