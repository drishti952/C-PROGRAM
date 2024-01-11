#include<stdio.h>
int main()
{
    int i,ar[20],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Index of array [%d] and value of array %d\n",i,ar[i]);
    }
    
    
}