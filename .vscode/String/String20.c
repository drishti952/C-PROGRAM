#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[10],tmp;
    int i,j,len,asc1,asc2;
    printf("\n\n...........................");
    printf("\n ENTER ANY STRING [MAX 10 CHARACTERS] : ");
    printf("\n...........................\n\n");
    scanf("%s",&str);
    /*convert the string into the UPPER case */
    strupr(str);
    /*find out length of the string*/
    len=strlen(str);
    for ( i = 0; i < len; i++)
    {
        for ( j = i+1; j < len; j++)
        {
            asc1=str[i];
            asc2=str[j];
            if (asc1>asc2)
            {
                tmp=str[j];
                str[j]=str[i];
                str[i]=tmp;
            }   
        }
    }
    printf("\n\n...........................");
    printf("STRING IN THE APLPHABATICAL ORDER IS : ");
    printf("\n...........................\n\n");
    puts(str);
}