//WAP to calculate of a quadretic equation//
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2;
printf("put the values a,b,c");
scanf("%f%f%f",&a,&b,&c);
d =sqrt((b*b)-4*a*c);
if (d>0)
{
    r1=(-b+d)/2*a;
    r2=(-b-d)/2*a;
    printf("roots are=%f%f",r1,r2);
}
else
{
    printf("roots are imaginary");
}
return 0;
}
