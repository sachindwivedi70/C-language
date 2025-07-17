//WAP to calculate and print x power y//
#include<stdio.h>
#include<math.h>
int main()
{
    float a,x,y;
    printf("enter any number");
    scanf("%f%f",&x,&y);
    a=pow(x,y);
    printf("result=%f",a);
    return 0;
}