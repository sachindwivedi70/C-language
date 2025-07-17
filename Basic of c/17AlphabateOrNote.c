#include<stdio.h>
int main()
{
    char ch;
    printf("enter any characters");
    scanf(" %c",&ch);
    
    if(( ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        printf("you have entered a charcater=%c\n",ch);
    }
    
    else
    {
        printf("you have not enter a charcter=%c\n",ch);
    }
    return 0;
    }