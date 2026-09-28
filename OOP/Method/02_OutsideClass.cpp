#include <iostream>
#include <string>
using namespace std;

class IO{   // input and output class
    public:
        int id;
        string name;
        int age;
        string gender;

        // Defining methods
        void input();
        void output();
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

// Outside class Methods definition
    
void IO::input(){
    cout << "ID   : ";  cin >> id;
    cin.ignore();
    cout << "Name : ";  getline(cin, name);
    cout << "Age  : ";  cin >> age;
    cout << "Gender : ";    cin >> gender;   
}
void IO::output(){
    cout << "ID   : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
    cout << "Gender : " << gender << endl;
}

//  syntax of outside method definition
    // returnType className::functionName(){
    //     defintion...
    // } and do not forget to define the function inside the class okay...