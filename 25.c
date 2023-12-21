//Sum of Diagonal Elements in a Matrix: Write a program to calculate the sum of diagonal elements of a 2-D square matrix using a function.
#include <stdio.h>
#define n 3
int sum_diag(int m1[][n]) {
    int sum = 0;
    for (int i = 0; i < sizeof(*m1)/sizeof(int); i++) {
        sum += m1[i][i];
    }

    return sum;
}

int main() {
    int m1[][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum;

    sum = sum_diag(m1);
    printf("Sum of the diagonal elements: %d\n", sum);

    return 0;
}