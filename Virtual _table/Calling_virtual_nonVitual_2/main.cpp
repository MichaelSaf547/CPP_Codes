#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "Derived.cpp"


/*
// In class Base we have implemented all the functions as virtual 
// so when we call the any function, we use 
// the implementation of the Derived function.
// 
// The output:
// Base Cons.
// Derived Cons.
// Derived Func1.
// Derived Func2.
// Derived Dest.
// Base Dest.  
*/


int main(void)
{
    Base * test = new Derived();
    test->Func1();
    test->Func2();
    delete test;
    return 0;
}