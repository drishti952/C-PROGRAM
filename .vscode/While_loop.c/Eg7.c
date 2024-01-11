#include<stdio.h>
int main()
{
    int i,n,sum=0;
    i=1;
    n=5;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("\n%d",sum);   
    return 0;
}