#include<stdio.h>
int main(){
char c='a';
 char *ptr=&c;
printf("the value of ptr is %u\n",ptr);
ptr++;
printf("the value of ptr is %u\n",ptr);

    return 0;
}