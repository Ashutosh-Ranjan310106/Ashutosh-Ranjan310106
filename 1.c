//Simple Interest Calculation: Write a program that uses a function to calculate and return simple interest with given principal, rate, and time.
#include <stdio.h>
float get_SI(int p,int r,int t){
    return p*r*t/100.0;
}
int main(){
    int p=10000;
    int r=5;
    int t=2;

    float si;
    si=get_SI(p,r,t);
    printf("simple intrest is:  %f",si);
    return 0;
}
