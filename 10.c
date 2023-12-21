//Write a program that uses two functions to swap two numbers
//Using a third variable 
//Without using a third variable
#include<stdio.h>
int swap_by_third(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("a,b by using third variabel %d,%d \n",a,b);
    return 0;
}
int swap_without_third(int a,int b){
    int c;
    a=b+a;
    b=a-b;
    a=a-b;
    printf("a,b by without using third variabel %d,%d \n",a,b);
    return 0;
}
int main(){
    int a=20,b=13;
    swap_by_third(a,b);
    swap_without_third(a,b);
    return 0;
}

