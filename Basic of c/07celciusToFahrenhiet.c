//WAP to calculate tempture fahrenhiet to celcius//
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter tempture in fahrenhiet");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celcius=%f",c);
    return 0; 
}