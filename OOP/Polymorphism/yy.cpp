
#include <iostream>
using namespace std;

class A {
public:
    virtual void show() const {
        cout << "A\n";
    }

    virtual ~A() = default;
};

class B : public A {
public:
    void show() const override {
        cout << "B\n";
    }

    void extra() const {
        cout << "Extra B\n";
    }
};

class C : public B {
public:
    void show() const override {
        cout << "C\n";
    }
};

int main() {
    C obj;

    A* p = &obj;
    B* q = &obj;

    p->show();
    q->show();
    obj.show();

    q->extra();

    p->extra(); // What happens if you uncomment this?
}
