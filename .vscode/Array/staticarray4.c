#include<stdio.h>

int main()
{
    int a[3]={3,7,6}, b[3]={8,9,5}, c[3], i,sum=0;
    for(i=0;i<3;i++)
    {
        c[i]=a[i]-b[i];
    } 
    for(i=0;i<3;i++)
    {
        printf("  %d",c[i]);
    }
    return 0;
}