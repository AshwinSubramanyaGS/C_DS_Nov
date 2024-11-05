#include<stdio.h>


int main()
{
    int y=0;
    scanf("%i",&y);
    /*if(y%4==0&&y%100!=0)
        printf("it is a leap year");
    else if(y%100==0&&y%400==0)
        printf("it is a leap year");
    else 
        printf("it is not a leap year");*/
    printf("%s",(y%4==0&&y%100!=0)|| (y%100==0&&y%400==0)? "it is a leap year":"it is not a leap year");
    return 0;
}