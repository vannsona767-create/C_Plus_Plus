#include <iostream>
using namespace std;

// =====================
// Base class - Employee
// =====================

class Employee{
    protected: // protected access specifier
        string name;
        string role;
        double salary;
    public:
        // Constractors
        Employee(string n, string r, double s){
            name = n;
            role = r;
            salary = s;
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
        Developer(string n, string r, double s, string l) : Employee(n, r, s){
            programmingLanguage = l;
        };
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
        Manager(string n, string r, double s, int team) : Employee(n, r, s){
            teamSize = team;
        }
        // Manger Information function
        void showManager_Infor(){
            showEmployee_Infor();
            cout << "Team Size : " << teamSize << endl;
        }
};  

int main(){

    // =========
    // Developer 
    // =========

    cout << endl;
    cout << "===============| Company Information |=================" << endl;  cout << endl;
    cout << "=====> Developer" << endl; 
    Developer developer("Vann Sona", "Software Engineer", 5000, "C#");
    developer.showDeveloper_Infor();

    // =======
    // Manager
    // =======

    cout << endl;
    cout << "=====> Manager" << endl;
    Manager manager("Sokha", "Project Manager", 6000, 120);
    manager.showManager_Infor();

return 0;
}