#include<stdio.h>
int main()
{
    int i,j,arr[2][2];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",arr[i][j]);
        }
        
    }
    
}