#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    printf("Sum is %d",sum);
    return 0;
}