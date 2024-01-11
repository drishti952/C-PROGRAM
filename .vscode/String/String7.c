/*Toggled Character*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0,i,key;
    char original[40],toggled[40];
    printf("Enter Original String : ");
    gets(original);
    while(original[len]!='\0')
    len++;
    for ( i = 0; i < len; i++)
    {
        if(original[i]>'A'&&original[i]<='Z')
        toggled[i]=original[i]+32;
        else
        if(original[i]>='a'&&original[i]<='z')
        toggled[i]=original[i]-32;
        else
        toggled[i]=original[i];
    }
    printf("Toggled string : %s",toggled);
}