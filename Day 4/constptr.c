#include<stdio.h>


int main()
{
    const int x=99,y=100;
    int *z=&x;
    *z+=2;
    printf("%d",*z);
    return 0;
}