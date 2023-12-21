//Calculate Factorial using Loops: Write a program to calculate the factorial of a number using for loop and return its value.
#include<stdio.h>
unsigned long int cal_fac(int n){
    unsigned  long int fac=1;
    for (int i=1;i<=n;i++)
        fac=fac*i;
    return fac;
}
int main(){
    int n=5;
    printf("%lu",cal_fac(n));
    return 0;
}