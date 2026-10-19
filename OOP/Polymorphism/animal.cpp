#include <iostream>
using namespace std;
// devived class
class Animal{
    public:
        void sound(){
            cout << "Animal makes sound" << endl;
        }
};
// cat class
class Cat : public Animal {
    public:
        void sound(){
            cout << "Meow meow" << endl;
        }
};
// dog class
class Dog : public Animal {
    public:
        void sound(){
            cout << "Hus hus" << endl;
        }
};
int main(){
    Animal animal;
    Cat cat;
    Dog dog;

    animal.sound();
    dog.sound();
    cat.sound();
return 0;
}