#include<stdio.h>
int main()
{
int day;
printf("enter days(1-7):\n");
scanf("%d",&day);
switch(day)
{
    case 1:printf("monday\n");
            break;
    case 2: printf("tuesday\n");
            break;
    case 3 :printf("wednesday\n");
           break;
    case 4 : printf("thursday\n");
            break;
    case 5: printf("saturady\n");
             break;
    case 6: printf("sunday\n");
            break;
    default : printf(" not a valid day!");
return 0;

}
}
