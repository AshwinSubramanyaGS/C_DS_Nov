//C Program to Read Two Integers M and N & Swap their Values
#include<stdio.h>


int main()
{
    int x=1,y=12;
    scanf("%d%i",&x,&y);
    printf("Before swap x=%d y=%i",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("Before swap x=%d y=%i",x,y);
    return 0;
}