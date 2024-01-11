/*Vowel Count*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int len=0,i,vowel=0;
    char arr[100],ch;
    printf("Enter any string : ");
    fflush(stdin);
    gets(arr);
    while(arr[len]!='\0')
    len++;
    for ( i = 0; i <=len; i++)
    {
        ch=arr[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='U')
        vowel++;
    }
    printf("Total Vowel is %d : ",vowel);
}