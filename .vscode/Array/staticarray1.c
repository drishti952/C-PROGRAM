#include<stdio.h>

int main()
{
    int a[5]={3,7,6,2,1},i;
    printf("Array\n");
    for(i=0;i<5;i++)
    {
        printf("Index of array [%d] and Value of array [%d]\n",i,a[i]);
    }
    return 0;
}