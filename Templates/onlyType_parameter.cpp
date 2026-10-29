#include <iostream>
using namespace std;

// templates declaration 
template <typename pa> // typename is type parameter name
pa add(pa a, pa b){
    return a + b;
}

int main(){
    cout << add(5, 5) << endl;
    cout << add(1.5, 1.5) << endl;
    cout << add(string("Hello "), string("World")) << endl;

return 0;
}