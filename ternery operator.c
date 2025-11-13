#include<stdio.h>

int findmax(int x,int y)
{
    return (x>y)? x:y;                //Used ternery operator to find max value
}

int main()
{
    int max = findmax(3,4);
    printf("%d",max);
    return 0;
}