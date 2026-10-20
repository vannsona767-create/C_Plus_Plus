#include <iostream>
using namespace std;

// Calculatiion class 
class Calculation{
    public:
    // This declares a pure virtual function
        virtual double area() const = 0;
    // This is for cleanup resource
        virtual ~Calculation() = default;
};

// Rectangle
class Rectangle : public Calculation{
    private:
        double width;
        double length;
    public:
        // Retangle constructor
        Rectangle(double w, double l) : width(w) , length(l){};
        // rectangle calculation
        double area() const override{
            return width * length;
        }
};

// Circle 
class Circle : public Calculation{
    private:
        double redius;
    public:
        // circle constructor
        Circle(double r) : redius(r){};
        // circle calculation
        double area() const override{
            return 3.14 * redius * redius;
        }
};

// Square
class Square : public Calculation {
    private:
        double width;
    public:
        // square constructor
        Square(double w) : width(w){};

        double area() const override{
            return width * width;
        }
};        
int main(){
    Rectangle rectangle(5,5);
    Circle circle(5);
    Square square(3);
    Calculation * cal[] = {&rectangle, &circle, &square};

    for(Calculation * calculation : cal){
        cout << calculation->area() << endl;
    }

return 0;
}