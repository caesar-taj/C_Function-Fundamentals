                            //basic function statement
#include <stdio.h>
void birthday(char name[],int age)             //>>>parameter
{
    printf("\nHappy birtday dear %s!",name);
    printf("You are %d years old",age);
   
}
int main()
{
    char name[] = "Bro";
    int age = 21;
    birthday(name,age);                       //>>>argument
    return 0;
}