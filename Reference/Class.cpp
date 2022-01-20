#include "Class.h"
#include "iostream"

using std::cout;
using std::cin;

/*
// I use the member initializer list to assign the given twp 
// refernces to the class two references.
*/

/*
shape :: shape()
{
    cout<<"Shape default cons.\n";
}
*/
/*
// shape default cons is wrong here as the cons must get two
// references. I just included it to enables the checking of the error.
// Uncomment it to see the error.
*/

shape :: shape(int & temp1, int & temp2) : h(temp1), m(temp2)
{
    cout<<"Shape cons with two references.\n";
}

void shape :: Func1(void)
{
    cout<<"Shape Func1.\n";
}

shape :: ~shape (void)
{
    cout<<"Shape Dest.\n";
}