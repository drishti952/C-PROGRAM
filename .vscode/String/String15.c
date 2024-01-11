#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0;
    char s[4];
    printf("\n\n\tEnter the word you want to format : >> ");
    gets(s);
    for ( i = 0;s[i]!='\0'; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}