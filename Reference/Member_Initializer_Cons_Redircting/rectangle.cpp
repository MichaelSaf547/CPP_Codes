#include "rectangle.h"
#include "iostream"

using std::cout;
using std::cin;
using std::endl;


rectangle :: rectangle()
{
    cout<<"Rectangle default cons.\n";
    h = w = 0;
}

/*
// Here i redirect the one input constructor to the two inputs constructor.
*/
rectangle :: rectangle(int x) : rectangle(x, x)
{
    cout<<"Rectangle one inout cons.\n";
    h = w = x;
}

rectangle :: rectangle(int x, int y)
{
    cout<<"Rectangle two inputs cons.\n";
    h = x;
    w = y;
}

void rectangle :: Area(void)
{
    cout<<"Rectangle Area: "<< h * w<<".\n";
}

rectangle :: ~rectangle (void)
{
    cout<<"Rectangle Dest.\n";
}