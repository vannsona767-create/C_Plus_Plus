#include <iostream>
using namespace std;

class BankAccount{

    private:    

        double balance = 0;     // defualt amount of money

    public:

        // incress the balance when add more money that amount > 0
        void desposit(double amount){   // in this case, amount is the money that need to transfer into the the bank or add more money into the bank account
            if(amount > 0){
                balance += amount;
            }
        }

        // decress  the balance or making payment
        bool withdraw(double amount){    // amount is the money that need to take out
            // if balance less than amount, so users can not make payment
            if(amount <= 0){
                return false;
            }
            if(amount > balance){
                return false;
            }
            balance -= amount;
                return true;
        }

        // set method the amount of the money in bank account
        void setBalance(double b){
            balance = b;
        }

        // display or show method how much money in back account
        double getBalance(){
            return balance;
        }
};

int main(){

    BankAccount account;

    // variable for setting the amount of money in bank account
    double balance = 500;
    account.setBalance(balance);

    cout << "My last balance was : " << balance << endl;    // show the amount of money in bank account before making payment

    // amount of desposite and withdraw
    int amount = 200;  

    // account.desposit(amount);    
    account.withdraw(amount);

    cout << "Invested : " << amount << endl;
    cout << "My current balance is : " << account.getBalance() << endl;

return 0;
}
//  This program is really really like real bank 