#include <iostream>
#include <string>

using namespace std;

class Myclass{
    public:
        void myClass(){
            cout << "This is Myclass" << endl;
        }
};
class Child{
    public:
        void child(){
            cout << "This is child class" << endl;
        }
};
class GrandChild{
    public:
        void grandChild(){
            cout << "This is grand child class" << endl;
        }
};
class Allclass : public Myclass, public Child, public GrandChild{};
int main(){
    Allclass all;
    all.myClass();
    all.child();
    all.grandChild();
return 0;
}