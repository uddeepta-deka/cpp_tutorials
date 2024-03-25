/* 
Static binding v/s dynamic binding -----
We can override Base class virtual functions.
The function signature and return must be EXACTLY the same.
If they are different then we have redefinition NOT overriding.
Redefinition is statically bound and overriding is dynamically bound.
*/

#include <iostream>
#include <vector>
using namespace std;

class Base{
public:
    // Use the virtual keyword for dynamic binding
    virtual void say_hello() const {
        cout << "Hello - I am a base class object" << endl;
    }
    virtual ~Base(){ cout << "Base destructor" << endl; };
};

class Derived1:public Base{
public:
    // We donot need to write virtual here but it is a good practice
    virtual void say_hello() const {
        cout << "Hello - I am a derived class object 1 " << endl;
    }
    virtual ~Derived1(){ cout << "Derived 1 destructor" << endl; }
};

class Derived2:public Base{
public:
    virtual void say_hello() const {
        cout << "Hello - I am a derived class object 2 " << endl;
    }
    virtual ~Derived2(){ cout << "Derived 2 destructor" << endl; }
};

void greetings(const Base &obj){
    cout << "Greetings" << endl;
    obj.say_hello();
}

int main(){
    Base *p1 = new Base();
    Base *p2 = new Derived1();
    Base *p3 = new Derived2();

    vector <Base *> ptr_vec{p1, p2, p3};
    for (auto ptr:ptr_vec)
        // ptr->say_hello();
        greetings(*ptr);
    delete p1;
    delete p2;
    delete p3;
    return 0;
}