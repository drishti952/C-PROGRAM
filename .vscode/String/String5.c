/*String Word Count*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0,c=1;
    char s[40];
    printf("Enter a String : ");
    gets(s);
    while (s[len]!='\0')
    {
        if(s[len]==' ')c++;
        len++;
    }
    printf("Total Words : %d",c);
}