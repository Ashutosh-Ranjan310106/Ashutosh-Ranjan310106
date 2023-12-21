//Dynamic Memory Allocation for 1-D Array: Write a program to allocate memory dynamically for a 1-D array using malloc.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int*l;
    printf("malloc \n\n");
    l=(int*) malloc(10*sizeof(int));
    for (int i=0;i<10;i++){
        l[i]=i;}
    for (int i=0;i<10;i++){
        printf("%d\n",l[i]);
    }
    free(l);
}