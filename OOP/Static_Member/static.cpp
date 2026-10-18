#include <iostream>
using namespace std;
// use the "static" to count how many object of the class have been created
class Student{
    private:
        static int count;
    public:
        Student(){
            count++;
        }

        // get the count 
        static int getCount(){
            return count;
        }
};

int Student::count = 0;

int main(){
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    cout << "Count : " << Student::getCount() << endl;
return 0;
}