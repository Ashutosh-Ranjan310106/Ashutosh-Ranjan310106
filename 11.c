//Matrix Addition: Write a program to perform addition of two 2-D arrays (matrices).
#include <stdio.h>
#define n 3
#define m 3
int add_matrix(int m1[m][n],int m2[m][n],int sum_m[m][n]){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            sum_m[i][j]=m1[i][j]+m2[i][j];
        }
    }
    return 0;
}
int main(){
    int m1[m][n]={{1,2,3},{4,5,6},{7,8,9}};
    int m2[m][n]={{7,8,9},{4,5,6},{1,2,3}};
    int sum_m[m][n];
    add_matrix(m1,m2,sum_m);
     for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",sum_m[i][j]);
        }
        printf("\n");
    }
    return 0;
}