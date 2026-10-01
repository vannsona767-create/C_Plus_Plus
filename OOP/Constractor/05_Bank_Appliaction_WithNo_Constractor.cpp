#include <iostream>
using namespace std;

class BankAccount{
    private:
        string owner;
        double balance;
    public:
    // owner 
        void setOwner(string o){
            owner = o;
        }
        string getOwner(){
            return owner;
        }
    // balance
        void setBalance(double b){
            balance = b;
        }
        double getBalance(){
            return balance;
        }
    // deposit
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
            }
        }
};

int main(){
    // create object of the class
    BankAccount account;
    // show the owner of bank account
    account.setOwner("Vann Sona");
    cout << "Owner  : " << account.getOwner() << endl;
    // show the balance after initialzing
    account.setBalance(1000);
    cout << "Balance : " << account.getBalance() << endl;
    // deposit
    account.deposit(500);
    cout << "Balance after deposited : " << account.getBalance() << endl;
return 0;
}