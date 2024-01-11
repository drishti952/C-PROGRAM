#include<stdio.h>
int main()
{
    int i=34,*tmp;
    printf("i value is %u",i);
    printf("\ni addres is %u",&i);
    tmp=&i;/*star(*)tmp=i (2nd method) */
    printf("\ntmp value is %u",tmp);
    printf("\n*tmp value is %u",*tmp);
    return 0;
}
