#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("enter the marks of %d student:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        printf("the value of marks of %d students is:%d\n",i+1,marks[1]);
    }
return 0;
}