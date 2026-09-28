#include <iostream>
#include <string>
using namespace std;

class IO{   // input and output class
    public:
        int id;
        string name;
        int age;
        string gender;

        // Methods
        
        void input(){
            cout << "ID   : ";  cin >> id;
            cin.ignore();
            cout << "Name : ";  getline(cin, name);
            cout << "Age  : ";  cin >> age;
            cout << "Gender : ";    cin >> gender;   
        }
        void output(){
            cout << "ID   : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Age  : " << age << endl;
            cout << "Gender : " << gender << endl;
        }
};

int main(){

    cout << "======== Student Record ========" << endl;
    cout << "How many students do you wanna input?" << endl;
    int round;
    cout << "Enter : ";    cin >> round;

    IO io[round];

    // Input
    cout << "======== Input ========" << endl;
    for(int i = 0; i < round; i++){
        cout << "===== Student #"<< i + 1 <<" ======" << endl;
        io[i].input();
    }

    // Output
    cout << "======== Output ========" << endl;
    for(int i = 0; i < round; i++){
        cout << "===== Student #"<< i + 1 <<" ======" << endl;
        io[i].output();
    }
return 0;
}