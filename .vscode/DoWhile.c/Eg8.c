#include<stdio.h>
int main()
{
    int i,n,nm;
    i=0;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter the number:");
    scanf("%d",&nm);
    do
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    } while (i<=nm);
    
    return 0;
}