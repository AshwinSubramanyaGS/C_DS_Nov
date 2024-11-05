#include<stdio.h>
int main()
{
    int n=17,i=1;
    /*while(i<=9)
        printf("%d  X  %d  = %d\n",n,i++,n*i);*/
        print:printf("%d  X  %d  = %d\n",n,i++,n*i);
        if(i<11)goto print;
    return 0;
}