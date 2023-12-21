//Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements.
#include <stdio.h>
int main(){
    int n=10;
    int arr[]={1,3,4,2,5,1,6,3,12,11};
    for (int i=0;i<n;i++){
        if (arr[i]%2!=0){
            printf("%d\n",arr[i]);
        }

    }
    return 0;
}