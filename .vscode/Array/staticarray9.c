/*program to sort given array in ascending order*/
#include<stdio.h>
int main()
{
    int a[10],n,j,i,temp;
    printf("How many elements : ");
    scanf("%d",&n);
    printf("Enter %d elements below \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",& a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted list\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}