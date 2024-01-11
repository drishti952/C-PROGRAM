/*Convert into UPPER String*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char s1[20],s2[20];
    int i=0;
    printf("Enter a String : >>");
    scanf("%s",s1);
    while (s1[i]!='\0')
    {
        if (s1[i]>=97&&s1[i]<122)
        {
            s2[i]=s1[i]-32;
        }
        else
        {
            s2[i]=s1[i];
        }
        i++;
    }
    s2[i]='\0';
    printf("\n\nUPPER Case String : >> %s",s2);
}