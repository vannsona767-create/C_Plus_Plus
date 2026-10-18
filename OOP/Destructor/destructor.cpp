#include <iostream>
using namespace std;

class Myclass{
    public:
        Myclass(){
            cout << "The class has been created..." << endl;
        }
        ~Myclass(){
            cout << "The class has been destroyed..." << endl;
        }
};

int main(){
    Myclass m;
return 0;
}