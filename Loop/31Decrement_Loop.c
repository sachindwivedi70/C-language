#include<stdio.h>
int main(){
    int n;
    printf("enter any value\n");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("the value is %d\n",i);
    }return 0;
}