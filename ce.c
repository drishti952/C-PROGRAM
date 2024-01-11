#include<stdio.h>
int main()
{
    int a;
    char name[20];
    float math,sci,eng,total,per;
    printf("Enter the roll no : ");
    scanf("%d",&a);
    printf("\n Enter the name:");
    scanf("%s",&name);
    printf("\n Enter the maths marks :");
    scanf("%f",&math);
    printf("\n Enter the sci marks :");
    scanf("%f",&sci);
    printf("\n Enter the eng marks :");
    scanf("%f",&eng);
    total=math+sci+eng;
    printf("\n Total is = %f",total);
    per=total/3;
    printf("\n Percentage is =%f",per);
    if (per<40)
    {
        printf("\n Fail");
    }
    else if (per<50 && per>40)
    {
        printf("\n Grade C");
    }
    else if (per<60 && per>50)
    {
        printf("\n Grade B");
    }
    else if (per<70 && per>60)
    {
        printf("\n Grade A");
    }
    else
    {
        printf("\n Dist");
    }
    if (math<35||sci<35||eng<35)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n Pass");
    }
}