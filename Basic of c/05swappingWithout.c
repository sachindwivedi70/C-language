//WAP swapping a number without third variable//
#include<stdio.h>
int main() 
{
    int x,y;
    printf("enter any two number");
    scanf("%d%d",&x,&y);
    printf("before swapping= %d%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping= %d%d",x,y);
    return 0; 

}