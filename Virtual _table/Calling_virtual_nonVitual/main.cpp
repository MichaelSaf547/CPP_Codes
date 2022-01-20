#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "Derived.cpp"


/*
// In class Base we only have the Func2 that is virtual 
// so when we call the Func1 and use delete, we only use 
// the implementation of the Base function. 
//
// The output:
// Base Cons.   
// Derived Cons.
// Base Func1.   
// Derived Func2.
// Base Dest.  
//
// Notice here the Derived class Dest. hasn't been called as it is not virtual.
// so the Base should (it is prefered) be defined as virtual or the result might be undefied.
// In the next code i will implement the Base Dest. as virtual to see the difference. 
*/


int main(void)
{
    Base * test = new Derived();
    test->Func1();
    test->Func2();
    delete test;
    return 0;
}