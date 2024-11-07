#include<stdio.h>
int Sod(int );
int main()
{
    int no=0;
    scanf("%d",&no);
    printf("Sum of digits of no %d is %d",no,Sod(no));
    return 0;
}
int Sod(int n)
{
    if(n<=0)return 0;
    if(n==1)return n;
    return (n%10)+Sod(n/10);
}