//Swap Two Numbers Using Pointers: Write a program to swap values of two variables using pointers.
#include<stdio.h>
int main(){
    int a=23;
    int b=12;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("a-%d, b-%d",*pa,*pb);
}