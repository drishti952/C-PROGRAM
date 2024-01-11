#include<stdio.h>
int main()
{
    int a=10,b=41,c=412;
    if(a>b)
    {
        if(a>c)
        {
            printf("A");
        }
        else
        {
            printf("C");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B");
        }
        else
        {
            printf("w");
        }
    }
    return 0;   
}