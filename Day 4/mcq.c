 /*#include <stdio.h>
    int x=99;
    void foo();
    void main()
    {
        int x = 3;
        {
            int x = 4;
            printf("%d\n", x);
        }
        foo();
        printf("%d\n", x);
    }
    void foo()
    {
        printf("%d\n",x);
    }

     #include <stdio.h>
    int main()
    {
        char *p = NULL;
        char *q = 0;
        if (p)
            printf(" p ");
        else
            printf("nullp");
        if (q)
            printf("q\n");
        else
            printf(" nullq\n");
    }
    
       #include <stdio.h>
    int main()
    {
        int i = 10;
        void *p = &i;
        printf("%d\n", (int)*p);
        return 0;
    }
    */
        #include <stdio.h>
    int main()
    {
        int i = 0, j = 0;
        for (i; i < 2; i++){
            for (j = 0; j < 3; j++)
            {
                printf("1\n");
                break;
            }
            printf("2\n");
        }
        printf("after loop\n");
    }