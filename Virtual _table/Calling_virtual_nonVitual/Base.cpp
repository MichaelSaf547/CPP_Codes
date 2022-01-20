#include "Base.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Base :: Base(void)
{
    cout<<"Base Cons."<<endl;
}

void Base :: Func1(void)
{
    cout<<"Base Func1."<<endl;
}


void Base :: Func2(void)
{
    cout<<"Base Func2."<<endl;
}

Base :: ~Base(void)
{
    cout<<"Base Dest."<<endl;
}
