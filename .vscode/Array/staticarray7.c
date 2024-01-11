/*find maximum element form*/
#include<stdio.h>
int main()
{
    int num[2],i,max=0,n;
    printf("How many element ? : ");
    scanf("%d",&n);
    printf("Enter %d elements \n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    printf("Maximum = %d",max);
}