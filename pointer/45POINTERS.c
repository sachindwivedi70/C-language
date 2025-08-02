#include<stdio.h>
int main(){
    int i =50;
    int *j=&i;
    int**k=&j;
    printf("the value of i is %d\n",i);
   printf("the value of i is %d\n",*j);
    printf("the address of i is %d\n",&i);
     printf("the address of i is %d\n",j);
     printf("the address of j  is %d\n",&j);
      printf("the value of j is %d\n",*(&j));
  printf("the value of k is %d\n",*(&k));
       printf("the value of k is %d\n",&k);


    return 0;

}