#include<stdio.h>
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    for(int i=10;i;i--){
        printf("%d\n",n*i);
    }return 0;
}