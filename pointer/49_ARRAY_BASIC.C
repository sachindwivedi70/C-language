#include<stdio.h>
int main(){
    int marks[4];
    printf("enter the marks of 1 student:");
    scanf("%d",&marks[0]);
     printf("enter the marks of 2 student:");
     scanf("%d",&marks[1]);
      printf("enter the marks of 3 student:");
      scanf("%d",&marks[2]);
       printf("enter the marks of 4 student:");
       scanf("%d",&marks[3]);
printf("you have entered this values %d %d %d and %d",marks[0],
 marks[1], marks[2], marks[3]);
return 0;
}