#include<stdio.h>
void printarray(int *ptr,int n){
    for(int i=0;i<n;i++)
    printf("the value element %d is %d\n",i+1,*(ptr+i));
}
int main(){
int arr[]={22,34,44,565,66,78,89};
printarray(arr,7);
    return 0;
}