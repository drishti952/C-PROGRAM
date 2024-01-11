/*Search for a character in a string display its position and number of occurrences*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,c=0;
    char s[25],dis;
    printf("\n\n\n\t\tEnter the String : ");
    gets(s);
    printf("\n Enter the character you want to find : ");
    scanf("%c",&dis);
    printf("\n\nThe position you want to find are as below : ");
    for ( i = 0;s[i]!='\0'; i++)
    {
        if (s[i]==dis)
        {
            printf("%d",i);
            c++;
        }
    }
    printf("\n\nNumber of time occurrence : =%d",c);
}