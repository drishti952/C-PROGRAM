/*Replace Character*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0,i;
    char s[40],c,r;
    printf("Enter Original String : ");
    gets(s);
    while(s[len]!='\0')
    len++;
    fflush(stdin);
    printf("Enter Character to Replace : ");
    scanf("%c",&c);
    fflush(stdin);
    printf("Enetr New Character : ");
    scanf("%c",&r);
    for ( i = 0; i < len; i++)
    {
        if (s[i]==c)
        {
            s[i]=r;
        }
    }
    printf("%s",s);
}