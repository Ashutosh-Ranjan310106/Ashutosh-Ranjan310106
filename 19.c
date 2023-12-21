//Linear Search in Array: Write a program to implement linear search in a 1-D array.
#include<stdio.h>
int main(){
    int l[10]={1,4,2,5,12,11,15,18,19,8};
    int n;
    printf("enter a number to search:- ");
    scanf("%d",&n);
    for (int i=0;i<10;i++){
        if (l[i]==n){
            printf("number found at %d",i);
            break;
        }
        if (i==10){
            printf("number not found");
        }
    }

}