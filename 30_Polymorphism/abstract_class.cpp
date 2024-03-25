#include <iostream>
#include <vector>

using namespace std;

class Shape{ // Abstract base class
private:
    // Attributes common to all shapes
public:
    virtual void draw() = 0; // Pure virtual function
    // A pure virtual function is declared by assigning 0 in the declaration
    virtual void rotate() = 0; // Pure virtual function
    virtual ~Shape(){}
};

class Open_Shape: public Shape{ // Abstract class
public:
    virtual ~Open_Shape(){}
};

class Closed_Shape: public Shape{ // Abstract class
public:
    virtual ~Closed_Shape(){}
};

class Line: public Open_Shape{ // Concrete class
public:
    virtual void draw() override{
        cout << "Drawing a line" << endl;
    }
    virtual void rotate() override{
        cout << "Rotating a line" << endl;
    }
    virtual ~Line(){}
};

class Circle: public Closed_Shape{ // Concrete class
public:
    virtual void draw() override{
        cout << "Drawing a circle" << endl;
    }
    virtual void rotate() override{
        cout << "Rotating a circle" << endl;
    }
    virtual ~Circle(){}
};

class Square: public Closed_Shape{ // Concrete class
public:
    virtual void draw() override{
        cout << "Drawing a square" << endl;
    }
    virtual void rotate() override{
        cout << "Rotating a square" << endl;
    }
    virtual ~Square(){}
};

int main(){
    /* The following will generate compiler error because
    Shape is an abstract class.

    Shape s;
    Shape *p = new Shape();
    */
    Shape *p1 = new Circle();
    Shape *p2 = new Square();
    Shape *p3 = new Line();
    vector <Shape *> ptr_vec{p1, p2, p3};
    for (auto ptr:ptr_vec){
        ptr -> draw();
        ptr -> rotate();
    }
    delete p1;
    delete p2;
    delete p3;
    return 0;
   
}