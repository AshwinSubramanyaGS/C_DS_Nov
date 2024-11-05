#include<stdio.h>
int main()
{
    int a=0,b=-99;
    scanf("%d%i",&a,&b);
    if(a%b==0)
        printf("divisable");
    else
        printf("not divisable");
    return 0;
}