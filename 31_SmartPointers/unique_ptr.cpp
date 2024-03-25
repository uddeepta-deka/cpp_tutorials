/*
RAII : Resource Acquisition Is Initialization
- Common idiom or pattern used in software design based on container object lifetime
- RAII objects are allocated on the stack
- Resource Acquisition: 
    > Open a file
    > Allocate memory
    > Acquire a lock
- Is Initialization 
    > The resource is acquired in a constructor
- Resource relinquishing
    > Happens in the destructor
        -> Close the file
        -> Deallocate the memory
        -> Release the lock

Smart pointers are examples of RAII classes.

unique_ptr does not allow copy.
*/

#include <iostream>
#include <memory>
#include <vector>

class Test{
private:
    int data;
public:
    Test(): data{0}{std::cout << "Test constructor (" << data << ")" << std::endl;}
    Test (int data): data{data} {std::cout << "Test constructor (" << data << ")" << std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout << "Test destructor (" << data << ")" << std::endl;}
};

int main(){
    // Test t1;
    //Test *t1 = new Test(1000); // Using raw pointer
    //delete t1;

    // Using unique pointer
    // std::unique_ptr<Test> t1 {new Test (100)};
    // std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);

    // std::unique_ptr<Test> t3 ;
    // t3 = std::move(t1);
    // if(!t1)
    //     std::cout<<"t1 is nullptr" << std::endl;

    std::vector <std::unique_ptr<Test>> tests;
    tests.push_back(std::make_unique<Test>(100));
    tests.push_back(std::make_unique<Test>(200));
    return 0;
}