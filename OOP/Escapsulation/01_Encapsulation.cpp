#include <iostream>
using namespace std;

class BankAccount{

    public: // child class can have everything as parent class
        string whatever(){
            return "Hello kon papa";
        }

    // private: = defualt
    private:    // child class is not allowed to have anything as parent class. if try to print the data from this, will cause the problem or error
        double balance = 1000;

    
};

int main(){

BankAccount acc;
acc.balance = 1001; // can be updated or reassigned
cout << "The money in bank acccount is : " << acc.balance << endl;
cout << acc.whatever() << endl;


return 0;
}