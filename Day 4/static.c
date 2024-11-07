#include<stdio.h>

void myfank();
int main()
{
    printf("Hello World\n");
    myfank();
    printf("Hello World2\n");
    myfank();
    printf("Hello World3\n");
    return 0;
}
void myfank()
{
    static int x=5;
    printf("%d\n",x);
    x++;

}