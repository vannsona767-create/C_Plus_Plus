#include <iostream>
using namespace std;

template <typename T>
class Repository {
    public:
    // pure function member
        virtual void save(const T& item) = 0;
        virtual ~Repository() = default;
};
template <typename T>
class ConsoleRepository : public Repository<T> {
    public:
        // constructor
        void save(const T& item) override {
            cout << "Saving : " << item << endl;
        }
};
int main(){
    ConsoleRepository <int> console;
    console.save(50);
return 0;
}