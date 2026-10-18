#include <iostream>
using namespace std;

class  Student{
    private:
    // data members
        string name;
        int age;
        static int totalStudent;
    public:
        // Constructor 
        Student(string n, int a) : name(n), age(a)
        {
            totalStudent++;     // incress by 1 after the object created
        }
        // count the student total
        static int getTotal(){
            return totalStudent;
        }
};

int Student::totalStudent = 0;

int main(){
    Student s("Chea Seng", 20);
    Student s1("Sivvong", 19);
    Student s3("Vann Sona", 66);

    cout << "Student : " << Student::getTotal() << endl;
return 0;
}