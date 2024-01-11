/*add corresponding elements of two 1-d array and store them in third 1-d array*/
#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i,n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    printf("Enter %d elements of array A \n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d elements of array B \n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("Third Array \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",c[i]);
    }
}