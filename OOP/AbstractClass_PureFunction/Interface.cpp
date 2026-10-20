#include <iostream>
using namespace std;

// interface-like class
class Notifier{
    public:
        // Pure virtual function 
        virtual void send(string message) = 0;
        // Destructor
        virtual ~Notifier() = default;
};

// SMS notification
class SMS : public Notifier{
    public:
        void send(string message) override{
            cout << "SMS : " << message << endl;
        }
};

// Gmail notification
class Gmail : public Notifier{
    public:
        void send(string message) override{
            cout << "Gmail : " << message << endl;
        }
};

// Telegran notification
class Telegram : public Notifier{
    public:
        void send(string message) override{
            cout <<"Telegram : " << message << endl;
        }
};

int main(){
    // Create each classes's object
    SMS sms;
    Gmail gmail;
    Telegram telegram;

    // SMS
    Notifier * notifier = &sms;
    notifier->send("The message has sent via SMS");
    // Gmail
    notifier = &gmail;
    notifier->send("The message has sent via gmail!");
    // Telegram
    notifier = &telegram;
    notifier->send("The message has sent via telegram");

return 0;
}