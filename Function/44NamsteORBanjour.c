#include<stdio.h>
void namaste();
void bonjour();

int main(){
    
printf("Enter i for indian & f gor bonjour");
char ch;
scanf("%c",&ch);
if(ch=='i'){
namaste();
} else {
    bonjour();
}



    return 0;
}
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}