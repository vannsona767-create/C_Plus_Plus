#include <iostream>
using namespace std;
// abstract class
class Payment{
    public:
    // Pure virtual function
        virtual void pay(double amount) = 0;
};
// ABA
class ABA : public Payment{
    public:
        void pay(double amount) override{
            cout << "Paid " << amount << " by using ABA" << endl;
        }
};
// Credit card
class CreditCard : public Payment{
    public:
        void pay(double amount) override{
            cout << "Paid " << amount << " by using Credit card" << endl;
        }
};
int main(){
    ABA aba;
    CreditCard card;

    // ABA
    Payment * payment = &aba;
    payment->pay(100);

    // Credit card
    payment = &card;
    payment->pay(500);


return 0;
}