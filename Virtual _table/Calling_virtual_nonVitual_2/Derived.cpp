#include "Derived.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Derived :: Derived(void)
{
    cout<<"Derived Cons."<<endl;
}

void Derived :: Func1(void)
{
    cout<<"Derived Func1."<<endl;
}


void Derived :: Func2(void)
{
    cout<<"Derived Func2."<<endl;
}

Derived :: ~Derived(void)
{
    cout<<"Derived Dest."<<endl;
}