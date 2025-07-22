//WAP which takes a no. from the user and print its quotient and remender dividing by 10//
#include<stdio.h>
int main()
{
    int n,q,r;
    printf("enter number");
    scanf("%d",&n);
    q=n/10;
    r=n%10;
    printf("quoient=%d",q);
    printf("remender=%d",r);
    return 0;
    
}
