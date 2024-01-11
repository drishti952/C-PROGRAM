#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char name[20];
    printf("Enter A String : >> ");
    scanf("%s",name);
    for ( i = 0; i < strlen(name); i++)
    {
        printf("\n\n\t%c\t%d\n",name[i],name[i]);
    }
}