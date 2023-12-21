//Sum of Array Elements: Write a program to calculate and return the sum of elements of a 1-D array.
#include <stdio.h>
int get_sum(int arr[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n=10;
    int arr[]={1,3,4,2,5,1,6,3,12,11};
    printf("%d",get_sum(arr,n));
    return 0;
}