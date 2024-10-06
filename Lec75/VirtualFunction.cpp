#include<iostream>
using namespace std;

// Base class
class Shape {
    public:
        // Virtual function
        virtual void draw() {
            cout << "Drawing Shape" << endl;
        }
};

// Derived class: Circle
class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Rectangle" << endl;
        }
};

int main() {
    // Base class pointer pointing to derived class objects
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    
    // Runtime polymorphism: Calls the derived class version of draw()
    shape1->draw(); // Calls Circle's draw() function
    shape2->draw(); // Calls Rectangle's draw() function
    
    // Clean up
    delete shape1;
    delete shape2;
    
    return 0;
}
