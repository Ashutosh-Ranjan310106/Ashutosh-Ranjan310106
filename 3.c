//Sum of Natural Numbers: Given a positive integer n, write a program to calculate and return the sum of natural numbers up to n using loops.
#include <stdio.h>
int sum_of_n_num(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n=10;
    int sum=sum_of_n_num(n);
    printf("%d",sum);
    return 0;
}