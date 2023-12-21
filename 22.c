//Recursive Function for Factorial: Write a program to calculate the factorial of a number using recursion.
#include<stdio.h>
int factorial(int n){
    if (n==1){
        return n;
    }
    n=n*factorial(n-1);
    return n;
}
int main(){
    printf("%d",factorial(5));
}
