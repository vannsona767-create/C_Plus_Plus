#include <iostream>
using namespace std;

class Data{
    public: // public - members are accessible from outside the class
        string name = "Sona"; // this member will be changable everywhere becuase of public
        
        void chat(){
        cout << name << endl;
    }
    };

int main(){
    Data data1;
    data1.name;
    cout << "My name is " << data1.name << endl;
    
    Data data2;
    data2.chat();
return 0;
}