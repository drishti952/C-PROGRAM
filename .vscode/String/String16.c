/*Delete a given word from a even string*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char s1[80],s2[20],store[40];
    int len1=0,len2=0,i,j,k,found;
    printf("Enter the string : ");
    gets(s1);
    while(s1[len1]!='\0')
    len1++;
    printf("\n Enter the word to delete : ");
    gets(s2);
    while(s2[len2]!='\0')
    len2++;
    for ( i = 0; i < len1; i++)
    {
        found=1;
        store[i]=s1[i];
        for ( j = 0; j < len2; j++)
        {
            if (s1[i+j]!=s2[j])
            {
                found=0;
                break;
            }
        }
        if (found==1)
        {
            printf("\nString Found");
            for (k=i-1,j=i+len2;j<=len1;j++,k++)
            {
                store[k]=s1[j];
            }
            printf("\n\n%s",store);
            break;
        }
    }
    if (found==0)
    {
        printf("Word to be deleted not found");
    }
}