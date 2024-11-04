/*
    conditional stmt? if true val : if false val
 */

 #include<stdio.h>

int main()
{
    int a=2,b=3;
    int c= a>b?a:b>4?1b:99;
    //a>b ? printf("a is greater\n") : printf("b is greater\n");
    printf("%s",a>b ? "a is greater\n":"b is greater\n" );

    
    return 0;
}