#include <iostream>
using namespace std;
// parent class
class Myclass{
    public:
        void myFunction1(){
            cout << "This is parent class" << endl;
        }
};
// child class
class Mychild : public Myclass{
    public: 
        void myFunction2(){
            cout << "This is child class" << endl;
        }
};
// child class
class MyGrandChild : public Mychild{
    public: 
        void myFunction3(){
            cout << "This is grand child class" << endl;
        }
};
// child class
class GetAll : public MyGrandChild{

};
int main(){
    GetAll getAll;
    getAll.myFunction1();
    getAll.myFunction2();
    getAll.myFunction3();
return 0;
}
// This is called multi level inheritance