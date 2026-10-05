#include <iostream>
using namespace std;

class Student{
    private: 
        string name;
        int age;
    public:
    // initialization list
        Student(string n, int a) : name(n), age(a){ // the same
        }

        // Student(string n, int a){
        //     name = n;
        //     age = a;
        // }

        friend void getName(Student Name);
        friend void getAge(Student Age);
};
void getName(Student Name){
    cout << "My name is : " << Name.name << endl;
}

void getAge(Student Age){
    cout << "I'm "<< Age.age <<" years old" << endl;
}
int main(){
    Student student("Vann Sona", 18);
    getName(student);
    getAge(student);

return 0;
}