#include<stdio.h>
int main()
{
    int i,n=5,sum=1;
    i=1;
    while (i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}