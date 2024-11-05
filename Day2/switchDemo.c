/*
    switch(vari)
    {
        case val: ........

        case valx:....

        default: .....
    }
 */

#include<stdio.h>


int main()
{
    int a=199;
    switch(a+1-1)
    {
        case 200-1:printf("Case 1");
        case 2:printf("Case 2");
               break;
        case 3:printf("Case 3");
        case 4:printf("Case 4");
        case 5:printf("Case 5");

    }
    
    return 0;
}