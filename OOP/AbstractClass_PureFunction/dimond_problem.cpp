#include <iostream>
using namespace std;
// base class
class Person{
    public:
        int age = 20;
};
// student
class Student : public Person{};
class Worker : public Person{};

// all class inheritance
class All : public Student , public Worker{};

int main(){
    All all;
    // all.age; //  ambiguous
    cout << "Age : " << all.Student::age << endl;
    cout << "Age : " << all.Worker::age << endl;
return 0;
}