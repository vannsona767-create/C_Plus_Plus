#include <iostream>
#include <string>
#include <limits>
using namespace std;

// =====================
// Base class - Employee
// =====================

class Employee{

    protected: // protected access specifier
        string name;
        string role;
        int salary;

    public:
        // Constractors
        Employee(string n = "", string r = "", int s = 0){
            name = n;
            role = r;
            salary = s;
        }

        // Input Employee Information function
        void inputEmployee_Infor(){
            cout << "Name : ";  getline(cin, name);
            cout << "Role : ";  getline(cin, role);  
            cout << "Salary : $";   cin >> salary;
            // Clear the leftover Enter key 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Employee Infomation function
        void showEmployee_Infor(){
            cout << "Name : " << name << endl;
            cout << "Role : " << role << endl;
            cout << "Salary : $" << salary << endl;
        }
};

// =======================
// Child class - Developer 
// =======================

class Developer : public Employee{

    private: 
        // Language that dev uses to create the project

        string programmingLanguage;

    public:
        // Constractors

        Developer(string n = "", string r = "", int s = 0, string l = "") : Employee(n, r, s){
            programmingLanguage = l;
        };

        // Input Developer Information function
        
        void inputDeveloper_Infor(){
            inputEmployee_Infor();
            cout << "Language : ";  getline(cin, programmingLanguage);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Developer Information function

        void showDeveloper_Infor(){
            showEmployee_Infor();
            cout << "Language : " << programmingLanguage << endl;
        }   
};

// =====================
// Child class - Manager
// =====================

class Manager : public Employee{

    private:
        // Amount of employees under Manager 
        
        int teamSize;

    public:
        Manager(string n = "", string r = "", int s = 0, int team = 0) : Employee(n, r, s){
            teamSize = team;
        }

        // Input Manager Information function

        void inputManager_Infor(){
            inputEmployee_Infor();
            cout << "Team Size : "; cin >> teamSize;

            // Clear leftover Enter 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Show Manager Information function
        void showManager_Infor(){
            showEmployee_Infor();
            cout << "Team Size : " << teamSize << endl;
        }
};  
// menu

void menu(){
    cout << "[1]. Developer" << endl;
    cout << "[2]. Manager" << endl;
    cout << "[3]. Exit The Program" << endl;
}

int main(){

    // =========
    // Developer 
    // =========
    
    const int devSize = 5;
    Developer developer[devSize];

    // =======
    // Manager
    // =======

    const int maSize = 5;
    Manager manager[maSize];


    cout << "===============| IT Company  |=================" << endl;
    while(true){
    int choice;
    cout << "Enter Choice : ";  cin >> choice;
    // Clear Enter after choice 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    switch(choice){
        case 1:
            cout << "=====> Developer" << endl;
            for(int dev = 0; dev < devSize; dev++){
                developer[dev].inputDeveloper_Infor();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                developer[dev].showDeveloper_Infor();
            }
            break;
        case 2:
            cout << "=====> Manager" << endl;
            for(int ma = 0; ma < maSize; ma++){
                manager[ma].inputManager_Infor();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                manager[ma].showManager_Infor();
            }
            break;
        case 3:
            cout << "The Programm has been exited!" << endl;
            return 0;
    }  
}
return 0;
}   