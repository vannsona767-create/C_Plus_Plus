#include <iostream>
using namespace std;

template <typename K, typename V>
class Pair{
    private:
        K key;
        V value;
    public:
        // constructor
        Pair(K k, V v) : key(k), value(v){};
        // get key
        K getKey() const {
            return key;
        }
        // get value
        V getValue() const {
            return value;
        }
};

int main(){
    Pair<int, string> student(18, "Vann Sona");
    cout << "Student name : " << student.getKey() << endl;
    cout << "Student age : " << student.getValue() << endl;
    
    Pair<string, double> product("Laptop", 49.99);
    cout << "Product : " << product.getKey() << endl;
    cout << "Price : " << product.getValue() << endl;
return 0;
}