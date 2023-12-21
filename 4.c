//Check Even or Odd Number: Write a program that takes n as user input and determines if it is even or odd.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0)
        printf("number is even");
    else
        printf("number is odd");
    return 0;
}
