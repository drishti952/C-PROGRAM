#include<stdio.h>

int main()
{
    int a[20]={11,64,23,97,45,2,8,50,100,25,40,19,105,39,87,116,200,1,39,20},i,sum=0;
    for(i=0;i<20;i++)
    {
        printf("Index of array [%d] and Value of array [%d]\n",i,a[i]);
        sum=sum+a[i];
    }
    printf("Sum is %d",sum);
    return 0;
}