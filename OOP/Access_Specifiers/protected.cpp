#include <iostream>
using namespace std;

class Data{
    protected: // protected - members cannot be accessed from outside the class,  however, they can be accessed in inherited classes or in child classes.
        int age;
};

int main(){
    Data data;
    // this will get error
    // data.age = 18;
    // cout << "I'm "<<data.name<<" years old" << endl;
    

return 0;
}