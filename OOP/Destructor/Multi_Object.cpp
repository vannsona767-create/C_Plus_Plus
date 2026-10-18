#include <iostream>
using namespace std;

class Student{
    private:
        string name;
    public:
        Student(string n){
            name = n;
            cout << name << " has been created" << endl;
        }
        ~Student(){
            cout << name << " has been destroyed" << endl;
        }
};

int main(){
    Student s1("Sona");
    Student s2("Chea");
    // objects are destroyed in the reverse order of construction.
return 0;
}