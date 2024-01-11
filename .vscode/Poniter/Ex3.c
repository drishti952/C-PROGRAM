/*Swap the variable*/
#include<stdio.h>
int main()
{
    int a,b;
    int *x,*y,t;
    printf("Enter the value : ");
    scanf("%d %d",&a,&b);
    printf("\n\n");
    x=&a;
    y=&b;
    t=*y;
    *y=*x;
    *x=t;
    printf("X : %d \nY : %d",*x,*y);
}