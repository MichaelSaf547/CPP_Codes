#include "square.cpp"
#include "iostream"


/*
// The member initializer list enables you to initialize and redirecting constructors. 
// Follow the output lines.
*/

int main(void)
{
    
    rectangle rect1;
    rectangle rect2(2);
    rectangle rect3(3, 4);
    square squ1;
    square squ2(5); 
    rect1.Area();
    rect2.Area();
    rect3.Area();
    squ1.Area();
    squ2.Area();
    return 0; 
}


/*
// Rectangle default cons.      (rect1 using the default cons.)
// Rectangle two inputs cons.   (rect2 but i redirect the constructor so it called the two inputs cons. first.)
// Rectangle one inout cons.    (rect2 after finishing the member initializer list.)
// Rectangle two inputs cons.   (rect3 using two inputs cons.)
// Rectangle two inputs cons.   (squ1 but i redirect the cons so it called the one input cons of rectangle which called the two inputs cons.)
// Rectangle one inout cons.    (squ1 but i redirect the cons so it called the one input cons of rectangle and print after finishing the member initializer list.)
// Square default cons.         (squ1 after calling the one input cons. of rectangle.)
// Rectangle default cons.      (squ2 but i did not redirect the cons. so it went to the default cons.)
// Square one input cons.       (squ2 one input cons. after getting back from the default cons. of rectangle.)
// Rectangle Area: 0.           (rect1 Area: 0 * 0 = 0.)
// Rectangle Area: 4.           (rect2 Area: 2 * 2 = 4.)
// Rectangle Area: 12.          (rect3 Area: 3 * 4 = 12.)
// Square Area: 0.              (squ1 Area: 0 * 0 = 0.)
// Square Area: 25.             (squ2 Area: 5 * 5 = 25.)
// Square Dest.                 (squ2 Dest. the last created object is the first to die.)
// Rectangle Dest.              (squ2 Dest. redirection to the dest. of the rectangle.)
// Square Dest.                 (squ1 Dest.)
// Rectangle Dest.              (squ1 Dest. redirection to the dest of the rectangle.)
// Rectangle Dest.              (rect3 Dest.)
// Rectangle Dest.              (rect2 Dest.)
// Rectangle Dest.              (rect1 Dest.)
*/