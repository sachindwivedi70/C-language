// WAP to calculate swapping a number using third variable//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any two ");
    scanf("%d%d",&a,&b);
    printf("before swapping=%d%d",a,b);
    c=b;
    b=a;
    a=c;
    printf("after swapping=%d%d",a,b);
    return 0;
}