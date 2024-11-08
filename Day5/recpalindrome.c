//C Program to Check whether a given String is Palindrome or not, using Recursion
#include<stdio.h>
#include<string.h>
int isPallin(char*);
int main()
{
    printf("Hello World");
    return 0;
}

int isPallin(char *s )
{
    static int i=0,len=strlen(s);
    if(s[i]!=s[len-i])return 0;
}