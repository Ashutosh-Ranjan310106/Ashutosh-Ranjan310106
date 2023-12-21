//Compute nCr using Functions: Write a function to calculate nCr, where n and r are given by the user.
#include <stdio.h>
int get_nCr(int n,int c){
    int nCr=1;
    for (int i=0;i<c;i++){
        nCr*=(n-i)/(c-i);
    }
    return nCr;
}
int main(){
    int n,c;
    printf("enter n,r:- ");
    scanf("%d,%d",&n,&c);
    int nCr;
    nCr=get_nCr(n,c);
    printf("%d",nCr);
}