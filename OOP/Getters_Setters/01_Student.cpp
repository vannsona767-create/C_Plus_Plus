#include <iostream>
#include <string>
using namespace std;

class Student{

    private:
    
        string name;
        int age;

    public:

        // name controll

        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }

        // age controll
        
        void setAge(int a){
            age = a;
        }
        int getAge(){
            return age;
        }
};

int main(){

    Student student;

    // name

    student.setName("Sona");
    cout << "My name is : " << student.getName() << endl;

    // age

    student.setAge(18);
    cout << "I'm "<< student.getAge() <<" years old" << endl;

return 0;
}