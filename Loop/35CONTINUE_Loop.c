#include<stdio.h> 
int main(){
    int skip=6;
    int i=0;
    for( i=0;i<10;i++){
        if(i==skip)
            continue ;
        printf("%d\n",i);
        
            
    }
    return 0;
}