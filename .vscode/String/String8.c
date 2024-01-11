/*String Delete Character*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0,i,f,k=0;
    char s[40],d,store[40];
    printf("Enter Original String : ");
    gets(s);
    while(s[len]!='\0')
    len++;
    fflush(stdin);
    printf("Enter Character to delete : ");
    scanf("%c",&d);
    for ( i = 0; i <=len; i++)
    {
        if (s[i]!=d)
        {
            store[k++]=s[i];
        }
    }
    printf("%s",store);
}