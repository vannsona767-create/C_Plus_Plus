#include <iostream>
using namespace std;

class Myclass{
    // data members
    private:
        string name;
        int age = 14;
    public:
        Myclass(string n, int a) { name(n), age(a) 
            cout << "My name is "<< name << endl;
            cout << "I'm " << age << endl;
        }
};

int main(){
    Myclass ma("Vann Sona", 123);    // if use : (Initailization list) the agurment can be change no error even the first initialization is declare by const data type
    // if donot use : and name = n,  age = a inside the {} will cause error(safe)
return 0;
}