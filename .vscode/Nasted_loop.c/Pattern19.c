#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=5; i++)
    {
        for(j=1;j<=i;j++)
        {
            if (i==1||i==2&&j==2||i==3&&j==2||i==4&&j==1||i==5&&j==1||i==4&&j==3||i==5&&j==3||i==5&&j==5)
            {
                printf("1");
            }
            else 
            {
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}
