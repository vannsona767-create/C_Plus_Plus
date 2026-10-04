#include <iostream>
using namespace std;

class Data{
    // private is defualt
    private: // private - members cannot be accessed (or viewd) from outside the class
    string name;
};

int main(){
    Data data;
    // this got error due to variable name is clared in private
    // cout << "My name is " << data.name << endl;
return 0;
}