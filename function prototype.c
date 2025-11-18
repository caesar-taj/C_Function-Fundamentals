#include<stdio.h>

void hello(char[], int);  //function prototype   
int main()
{
    //function prototype
    //What is it?
    //Function declaration without a body , before main()
    //Ensures that calls to a function are made with the correct arguments

    //important notes
    //many c compilers do not check parameter matching
    //function prototype is a solution to prevent this kind of error
    //helps with debugging
    //commonly used in header files
    char name[] = "Bro";
    int age = 21;
    hello(name,age);
    return 0;
}
void hello(char name[], int age)
{
    printf("\nHello %s",name);
    printf("\nYou are %d years old",age);
}