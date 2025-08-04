#include<stdio.h>
void printsting(char arr[]);
int  main(){

    char firstname[]="sachin";
    char lastname[]="dwivedi";
    printsting(firstname);
    printsting(lastname);
    return 0;
}
void printsting(char arr[])
    {
        for(int i =0; arr[i]!='\0';i++){
            printf("%c",arr[i]);
        }
        printf("\n");
    }
