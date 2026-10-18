#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:

        Student(string n, int a){
            name = n;
            age = a;
        }
        int incre(){
            age++;
            return age;
        }
        string getName() const{
            return name;
        }

        int getAge() const{
            return age;
        }
};
int main(){
    Student student("Vann Sona", 18);
    student.incre();
    cout << student.getName() << endl;
    cout << student.getAge() << endl;
return 0;
}