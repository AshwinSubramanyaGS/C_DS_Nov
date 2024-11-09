#include<stdio.h>

int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            arr[i+1]=(arr[i+1]>='a'&&arr[i+1]<='z')?arr[i+1]-('a'-'A'):arr[i+1];
        }   
    }
    printf("%s",arr);
    return 0;
}