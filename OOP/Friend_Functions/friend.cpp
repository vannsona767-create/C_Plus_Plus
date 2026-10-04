#include <iostream>
using namespace std;

class Employee{
    private:
        double salary;
    public:
        // constractor
        Employee(double s){
            salary = s;
        }
        // declare the friend function
        friend void getSalary(Employee emp);
};
// friend function is outside the class
void getSalary(Employee emp){
    cout << "My salary in next 5 five will be : " << emp.salary << endl; 
}
int main(){
    Employee employee(5000);
    getSalary(employee);
return 0;
}