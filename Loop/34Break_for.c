#include<stdio.h>
int main(){
    int i=0;
    for(int i=0;i<60;i++){
        printf("the value of i is %d\n",i);
        if(i==36){
            break;
        }
    }
}