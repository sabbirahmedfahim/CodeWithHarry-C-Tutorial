// Another way of declaring variables
#include <stdio.h>
struct Student
{
    int id;
    float marks;
} Sabbir, Fahim;

int main()
{
    Sabbir.id = 453;
    Fahim.marks = 99.45;
    printf("id of Sabbir: %d\nMarks of Fahim: %.2f\n", Sabbir.id, Fahim.marks);

    return 0;
}