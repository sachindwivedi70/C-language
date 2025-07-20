//WAP whch three subject marks of a student and print total , avrg, percentage//s
#include<stdio.h>
int main()
{
    float s1,s2,s3,t,avg,p;
    printf("enter marks of subjects:");
    scanf("%f%f%f",&s1,&s2,&s3);
    t=s1+s2+s3;
    avg=t/3;
    p=(t*100)/300;
    printf("total marks=%f\n",t);
    printf("avrage=%f\n",avg);
    printf("percentage=%f\n",p);
    return 0;
}