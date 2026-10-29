#include <iostream>
using namespace std;

template <typename T, typename U>
auto add(T a, U b){
    return  a + b;
}
int main(){
    cout << add<int>(10, 20) << endl;
    cout << add<double>(10, 20.44) << endl;
    cout << add<string>("Hello ", "World") << endl;
    cout << add<char>('A', 'B') << endl;
return 0;
}