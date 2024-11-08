/*
    1 2 3 4 5
      2 3 4 5
        3 4 5 
          4 5
            5
*/
#include<stdio.h>


int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(j+1>=n-i)
                printf("%d ",j+1);
            else
                printf("  ");
        }
            
        printf("\n");
    }
    
    return 0;
}