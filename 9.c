//Array operations: Write a program to find average, max and min elements from an array of n long integers.
#include <stdio.h>
float get_avg(int arr[],int n){
    float sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}
int get_max(int arr[],int n){
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
    }
int get_min(int arr[],int n){
    int min=arr[0];
    for (int i=0;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    return min;
    }
int main(){
    int n=10;
    int arr[]={1,3,4,2,5,1,6,3,12,11};
    printf("avrage is:- %f\n",get_avg(arr,n));
    printf("max is:- %d\n",get_max(arr,n));
    printf("min is:- %d\n",get_min(arr,n));
    return 0;
}