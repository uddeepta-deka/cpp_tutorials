/* 
Unlike a simple pointer, shared_ptr has control block that keeps track of 
the reference count for the managed object. This Reference count is shared among
all the copies of the shared_ptr instances pointing to the same object, ensuring
proper memory management and deletion.
Shared pointers allow copy
*/
#include "Account.h"
#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int> p1 {new int {100}};
    std::cout << "Use count " << p1.use_count() << std::endl;

    std::shared_ptr<int> p2 {p1}; // Shared ownership
    p1.reset(); // p1 is nulled out
    std::cout << "Use count p1= " << p1.use_count() << std::endl;
    std::cout << "Use count p2= " << p2.use_count() << std::endl;

    // With user defined classes
    std::shared_ptr<Account> a1 = std::make_shared<Account>(200);
    a1->deposit(1000);
    {
        std::shared_ptr<Account> a2 = a1;
        std::cout << a2.get() << std::endl;
        std::cout << "Use count a1 inside block = " << a1.use_count() << std::endl;
        std::cout << "Balance in a2 " << a2->get_balance() << std::endl;
    }
    std::cout << "Use count a1 outside block = " << a1.use_count() << std::endl;
    std::cout << a1.get() << std::endl;
    // Account *a3 = new Account(500);
    // Account a4(*a3);
    // delete a3;
    // a4.deposit(1000);
    // std::cout << a4.get_balance() << std::endl;
    return 0;
}