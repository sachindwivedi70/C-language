//WAP to calculate temperture celcius to fahrenhiet//
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the temp in celcius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("fahrenhiet=%f\n",f);
    return 0;
}