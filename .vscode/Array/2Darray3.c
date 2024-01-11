#include<stdio.h>
int main ()
{
    int n,a[10][10],i,j;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter %d*%d matrix\n",n,n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("Original Matrix\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Traspose matrix\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}