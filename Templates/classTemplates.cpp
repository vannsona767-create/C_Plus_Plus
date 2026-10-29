// generic classes
#include <iostream>
using namespace std;

template <typename T>
class Box{
    private:
        T value;

    public:
        // constructor
        Box(T v) : value(v) {};

        // get the value
        T getValue() const {
            return value;
        }
        // set the value
        void setValue(T v){
            value = v;
        }
};

int main(){
    Box<int> numberBox(100);
    Box<string> nameBox("Vann Sona");
    Box<double> d_numberBox(19.0);
    Box<char> charBox(75);
    //  output
    cout << "numberBox is : " << numberBox.getValue() << endl;
    cout << "nameBox is : " << nameBox.getValue() << endl;
    cout << "d_numberBox is : " << d_numberBox.getValue() << endl;
    cout << "charBox is : " <<  charBox.getValue() << endl;

return 0;
}