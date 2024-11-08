#include<stdio.h>


int main()
{
    int n=0,a[1000],sum=0,*p=a;
    
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));

    for(int i=0;i<n;sum+=*p,p++,i++);
    printf("%d",sum);
    return 0;
}