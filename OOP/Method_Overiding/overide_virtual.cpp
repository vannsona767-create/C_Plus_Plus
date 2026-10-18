#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound(){
            cout << "Any sound" << endl;
        }
        // use destructor to cleaup 
        // Purpose: To define how an object is destroyed and ensure safe destruction when deleting a child object through a parent-class pointer.
        virtual ~Animal() = default;
};  
class Dog : public Animal{
    public:
        void sound() override {
            cout << "Woof" << endl;
        }
};

int main(){

    Animal * animal = new Dog();
    animal->sound();
    // Purpose: To destroy the dynamically allocated object and release its allocated memory.
    // This line belongs where you want to destroy a dynamically allocated object, usually in a function such as main().
    delete animal;

return 0;
}

// we use virtual to prepare for devid-class or parent class to be the main one that child class can be overide 
// overide use to make the new version of the old one or the devide-class or parent class or. It is about scaling

