#include<stdio.h>
int main ()
{
    int i,j,k,arr1[10][10],rsum[10],csum[10],n;
    printf("\n\nFind the sum of rows an columns of a Matrix:\n");
    printf("-------------------------------------------------------\n");
    printf("Input the size of the square matrix:");
    scanf("%d",&n);
    printf("Input elements in the first matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("element - [%d],[%d]:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%4d",arr1[i][j]);
            printf("\n");
        }
        /*Sum of rows*/
    }
    
}