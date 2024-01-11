/*print sum of any 10 number using 1-d*/
#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    printf("Enter the 10 number : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",& num[i]);
        sum+=num[i];//sum=sum+num[i];
    }
    printf("Sum = %d",sum);
    return 0;
}