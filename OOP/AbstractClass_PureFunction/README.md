# An abstract class is a class that has at least one pure virtual function and therefore cannot be instantiated directly.
Payment p;  // Error: Payment is abstract

# A pure virtual function is a virtual function declared with = 0.

# Common mistakes — learn to recognize these
Mistake A: Creating an abstract-class object
Payment p;


Why it fails: Payment has a pure virtual function. You cannot create an object of this abstract class.

Mistake B: Forgetting to implement the function
class ABA : public Payment {
public:
    void makePayment(double amount) {
        cout << amount;
    }
};


Why it fails: makePayment() does not override pay(). ABA remains abstract because pay() is still unimplemented.

Mistake C: Using the wrong parameter type
void pay(int amount) override { }


Why it fails: The parent declares pay(double), not pay(int). The override keyword catches this mismatch.