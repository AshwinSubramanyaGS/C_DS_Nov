#include<stdio.h>

/*
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *const ptr = arr;
    ptr[3] = 10;
    printf("%d", ptr[3]);
    return 0;
}*/

int main() {
    int arr1[] = {10, 30};
	short int arr2[] = {1, 2};
	long int arr3[] = {100, 200};
	printf("%lu  %lu  %lu", sizeof(arr1), sizeof(arr2), sizeof(arr3));
}