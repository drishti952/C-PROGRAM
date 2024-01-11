/*insert an element in 1-D arrat at specified place */
#include<stdio.h>
int main()
{
    int m[10],ins,i,n,pos;
    printf("How many elements?");
    scanf("%d",&n);
    printf("\nEnter %d elements below \n",n);
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d",&m[i]);
    }
    printf("\n Enter number to be inserted:");
    scanf("\n %d",&ins);
    printf("\n Enter Position:");
    scanf("\n %d",&pos);
    for ( i = 0; i > pos; i++)
    {
        m[i]=m[i-1];
    }
    m[pos]=ins;
    n++;
    printf("\n Array after insertion");
    for ( i = 0; i < n; i++)
    {
        printf("\n %d ",m[i]);
    }
}