//Pointer Arithmetic: Write a program to illustrate the following basic pointer arithmetic operations.
//Increment a pointer
//Decrement a Pointer
//Add an integer to a pointer
//Subtract an integer from a pointer
//Subtract two pointers of the same type
#include<stdio.h>
int main(){
    int a=3;
    int b=4;
    int *p1;
    int *p2;
    p1=&a;
    p2=&b;
    printf("before:- %d, ",p1);
    p1++;
    printf("increment:- %d\n",p1);
    printf("before:- %d, ",p1);
    p1--;
    printf("decrement:- %d\n",p1);
    printf("before:- %d, addition 3:- %d\n",p1,p1+3);
    printf("before:- %d, subtract 3:- %d\n",p1,p1-3);
    printf("before p1:- %d, p2:-%d , subtracting two pointer:- %d\n",p1,p2,p1-p2);

}
