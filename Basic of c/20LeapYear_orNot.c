#include<stdio.h>
int main()
{
    int year;
    printf("enter the Year\n");
    scanf("%d",&year);
    if( year %4==0)
    {
        printf("this year is leap year\n");
    }
    else
    {
        printf("this is not a leap year\n");
    }
    return 0;
    
}