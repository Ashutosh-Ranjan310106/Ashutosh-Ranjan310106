//Find Largest Element in an Array: Write a program that uses for loops to find the largest element in a 1-D array and returns it.
#include <stdio.h>
int get_max(int arr[],int n){
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n=10;
    int arr[]={1,3,4,2,5,1,6,3,12,11};
    printf("%d",get_max(arr,n));
    return 0;
}