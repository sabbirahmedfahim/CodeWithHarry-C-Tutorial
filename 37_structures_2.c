// Detailed lecture, gems
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    float marks;
    char fav_char;
    char name[101]; // to run string, i hafta include string.h library
};
struct Student Sabbir, Fahim, Munna; //i can declare func, it it Global Variable
void print_using_global_var(){
    printf("%s", Sabbir.name);
} //to run the func, convert is from comment to code and convert local variables as comment
int main()
{
    struct Student Sabbir, Fahim, Munna; // declared variables inside func, so are Local Variables
    Sabbir.id = 234;
    Fahim.id = 269;
    Munna.id = 394;
    Sabbir.marks = 84.53;
    Fahim.marks = 91.94;
    Munna.marks = 75.64;
    Sabbir.fav_char = 's';
    Fahim.fav_char = 'd';
    Munna.fav_char = 'z';
    printf("Sabbir got %.2f marks\n", Sabbir.marks);
    printf("ID of fahim: %d\n", Fahim.id);
    printf("Munna's favourite char is: %c\n\n", Munna.fav_char);
    printf("Sabbir's id-mark-favchar: %d,%.2f,%c\n", Sabbir.id, Sabbir.marks, Sabbir.fav_char);
    printf("Fahim's id-mark-favchar: %d,%.2f,%c\n", Fahim.id, Fahim.marks, Fahim.fav_char);
    printf("Munna's id-mark-favchar: %d,%.2f,%c\n", Munna.id, Munna.marks, Munna.fav_char);
    printf("\n");
    strcpy(Sabbir.name, "Sabbir Bhaiii");
    strcpy(Fahim.name, "Programmer Fahim :D");
    strcpy(Munna.name, "SAF Munna Sylhet");
    printf("Sabbir's name is %s\n", Sabbir.name);
    printf("Fahims's name is %s\n", Fahim.name);
    printf("Munna's name is %s\n", Munna.name);
    printf("\n");
    print_using_global_var();
    return 0;
}