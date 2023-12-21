//Recursive Function for Fibonacci Series: Write a program to generate the Fibonacci series up to n terms using recursion.
#include<stdio.h>
int Fibonacci(int n){
    if (n==1){
        return 1;
    }
    n=n+Fibonacci(n-1);
    return n;
}
int main(){
    printf("%d",Fibonacci(5));
}