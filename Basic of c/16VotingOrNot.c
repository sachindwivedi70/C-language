//WAP to check wheather a person is aligible for vote or not// 
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age of person");
    scanf("%d",&age);
    if(age>=18)
    {
        printf(" this person is aligible for vote=%d",age);
    
    }
    else
    {
        printf("not aligible=%d",age);
    }
    return 0;
}