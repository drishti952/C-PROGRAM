#include<stdio.h>
int main()
{
    int i,n,nm;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the number:");
    scanf("%d",&nm);
    for (i = 0; i <=nm; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}