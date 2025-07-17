// WAP to checkwhetaer a number is odd or even//
#include <stdio.h>
int main()
{
    int n1;
    printf("enter any number");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
        printf("n1 is even=%d", n1);
    }

    else
    {
        printf("n1 is odd=%d", n1);
    }
    return 0;
}
