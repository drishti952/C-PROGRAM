/*Calculate the total number of capital,small and special character from array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char m[40];
    int cap=0,small=0,spec=0,i;
    printf("Enter a String : ");
    gets(m);
    for ( i = 0; i < strlen(m); i++)
    {
        if(m[i]>='A'&&m[i]<='Z')
        cap++;
        else if (m[i]>='a'&&m[i]<='z')
        {
            small++;
        }
        else
        {
            spec++;
        }
    }
    printf("\nCapital Letters : %d\n",cap);
    printf("Small Letters :%d\n",small);
    printf("Special Letters :%d\n",spec);
}