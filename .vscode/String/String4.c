/*String Length*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0;
    char s[100];
    printf("Enter a string : ");
    gets(s);
    while (s[len]!='\0')
    {
        len++;
    }
    printf("Length : %d",len);
}