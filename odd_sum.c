#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<n;i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum is 2%d",sum);
    return 0;
}