//WAP to calculate compund intrest//
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("enter three values");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*(pow(1+(r/100),t));
    printf("compund intrest=%f",ci);
    return 0;
}