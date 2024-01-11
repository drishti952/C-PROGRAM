/*sum of 2 variables*/
#include<stdio.h>
int main()
{
    int a,*ptr;
    ptr=&a;
    printf("Enter Value : ");
    scanf("%d",ptr);
    *ptr=*ptr+5;
    printf("\n Value of a is : %d",a);
    printf("\n Value of *ptr : %d",*ptr);
}