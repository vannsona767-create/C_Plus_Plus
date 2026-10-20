#include <iostream>
using namespace std;
// base class
class Person{
    public:
        int age = 20;
};
// student
class Student : virtual public Person{};
class Worker : virtual public Person{};

// all class inheritance
class All : public Student , public Worker{};

int main(){
    All all;
    cout << "Age : " << all.age; //  ambiguous
    
return 0;
}