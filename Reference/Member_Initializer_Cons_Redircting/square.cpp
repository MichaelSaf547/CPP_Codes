#include "square.h"
#include "iostream"

using std::cout;
using std::cin;
using std::endl;

/*
// Here i redirecte the default constructor of rectangle to the one input constructor.
*/
square :: square(void) : rectangle(0)
{
    cout<<"Square default cons.\n";
}

/*
// Here we got a one input but without the member initializer list we go to the default constructor of rectangle.
*/
square :: square(int x) 
{
    cout<<"Square one input cons.\n";
    h = w = x;
}

void square :: Area(void)
{
    cout<<"Square Area: "<< h * h<<".\n";
}

square :: ~square(void)
{
    cout<<"Square Dest.\n";
}