#include <iostream>
using namespace std;

class BankAccount{
    private:
        string owner;
        double balance;
    public:
    // owner and balance
        BankAccount(string o, double b){
            owner = o;
            balance = b;
        }
    // return owner
        string getOwner(){
            return owner;
        }
    // deposit
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
            }
        }
    // get the balance
        double getBalance(){
            return balance;
        }
};

int main(){
    // show the owner of bank account
    BankAccount account("Vann Sona", 100);
    cout << "Owner : " << account.getOwner() << endl;
    // the current balance
    cout << "Balance : " << account.getBalance() << endl;
    // deposit
    account.deposit(500);
    cout << "Balance after deposited : " << account.getBalance() << endl;
return 0;
}