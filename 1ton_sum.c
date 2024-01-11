#include<stdio.h>
int main()
{
    int i, n=5,sum=10;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}