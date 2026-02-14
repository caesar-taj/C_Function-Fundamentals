#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]= "Bro";
    char string2[]= "Code";

    // strlwr(string1);                        //converts a string to lowercase
    // strupr(string1);                       //converts a string to uppercase
    // strcat(string1, string2);             //appends string2 to end of string1
    // strncat(string1,string2,1);          //appends n characters from string2 to end of string1
    // strcpy(string1, string2);           //copy string2 to string1
    // strncpy(string1, string2, 1);      //copy n characters of string2 to string1
    
    // strset(string1, '?');               //sets all characters of a string to a given chracter   
    // strnset(string1, '?', 1);          //sets first n charcters of a string to a given character
    // strrev(string1);                  //reverses a string

    printf("%s",string1);

    int result = strlen(string1);   //returns string legth as an integer
    printf("%d", result);
   
    return 0;
}
