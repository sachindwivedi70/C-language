#include<stdio.h> 
int main(){
    int arr[]={10,49,38};
    int *ptr1=&arr[2];
    int *ptr2=arr[3];
    int diffrence = ptr1-ptr2;
    printf("the value of ptr1 is %d\n",*ptr1);
    printf("the value of ptr2 is %d\n",*ptr2);
    printf("the diffrence of ptr1 and ptr2 is %d",diffrence);

    return 0;
}