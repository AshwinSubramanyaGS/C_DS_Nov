//WACP to input a dynamic size array and print largest element
/*input :5
         1 99 7 37 13
  output :99
*/

#include<stdio.h>

int main()
{
    int n=0,a[100],lar=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    lar=a[0];

    for(i=1;i<n;i++)if(a[i]>lar)lar=a[i];
    
    printf("%d",lar);
    return 0;
}