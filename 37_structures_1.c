// WHAT IS A STRUCTURE IN C?
/*Structures are user defined data types in C.
int, float,
■Using structures allows us to combine data of different types together.
■It is used to create a complex data type which contains diverse information.
■They are very similar to arrays but structure can store data of any type,
which is practically more useful.*/

// basic
#include <stdio.h>
struct Employee
{
    int id;
    float marks;
    // id & marks are structure members
}; // now struct itselt is a data type
int main()
{
    struct Employee e1;
    e1.id = 12;       // structure members are accessed using dot[.] operator
    e1.marks = 43.54; // e1.marks, here (.) is called structure membes Operator
    /* Structure Name: e1
    Member name: id, marks*/

    // struct Employee e1 = {12, 43.54}; //another way

    return 0;
}