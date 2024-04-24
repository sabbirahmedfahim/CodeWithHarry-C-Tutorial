// // C Library: <string.h>
// // REMEMBER TO ADD New Library Called STRING

// // strcat() //combine two strings
// // strrev() //reverse
// // strlen() //show length
// // strcpy() //let's say: strcpy(s1,s2)
// // // that means copied s2 to s1
// // strcmp() //compare between two strings

// ONE
#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[] = "sabbir";
    char arr2[] = "ahmed";
    char arr3[] = "fahim";
    // strcat(arr1, arr2);
    printf("1. strcat() function:\n");
    puts(strcat(arr1, arr2)); // so this is how strcat works
    printf("\nchanges after strrev() runs:\n");
    printf("%s", arr1);     // interesting #THINK
    printf("\n%s\n", arr2); // interesting #THINK
    puts(arr1);             // this is alternative way to print the value of strrev
    printf("\n2. strlen() function:\n");
    printf("%d\n", strlen(arr2));
    char arr4[45];
    printf("\n3. strcpy() function:\n");
    strcpy(arr4, strcat(arr1, arr3));
    puts(arr4);
    printf("\n4. strrev() function:\n");
    printf("%s\n", strrev(arr4));

    char arr5[] = "apple";
    char arr6[] = "book";
    char arr7[] = "dog";
    char arr8[] = "dogkjk";
    printf("\n%s %s %s %s\n", arr5, arr6, arr7, arr8);
    printf("\n5. strcmp() function:\n");
    // I hafta gain more knowledge to understand how||why -1,0,1 comes
    //solution: it is called String Lexicographical Comparison
    /*note: strcmp(a,b) not always output -1/1
    just remember if output<0 then a is smaller, output>0 then b is smaller*/
    printf("arr5, arr6: %d\n", strcmp(arr5, arr6)); //a vs b
    printf("arr5, arr5: %d\n", strcmp(arr5, arr5)); //a vs a
    printf("arr7, arr5: %d\n", strcmp(arr7, arr5)); //d vs a
    printf("arr7, arr8: %d\n", strcmp(arr7, arr8)); //(space) vs j #remember***
    printf("arr8, arr7: %d\n", strcmp(arr8, arr7)); //j vs (space) 

    return 0;
}

// Quick Quiz
// #include<stdio.h>
// #include<string.h> //first time forget to input string library
// int main()
// {
//     char friend1[66], friend2[66];
//     scanf("%s %s", &friend1, &friend2);
//     printf("%s is a friend of %s\n", friend1, friend2);
//     puts(strcat(friend1, friend2));

//     return 0;
// }