#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            strcpy(&arr[i],&arr[i+1]);
        }   
    }
    printf("%s",arr);
    return 0;
}