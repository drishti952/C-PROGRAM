#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    if (isupper(a))
    {
        printf("It is UPPER case");
    }
    else if (islower(a))
    {
        printf("It is LOWER case");
    }
    return 0;
}