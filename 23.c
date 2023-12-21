//Call by Reference Using Pointers: Write a program to demonstrate call by reference using pointers in functions.
#include <stdio.h>
int swap(int *x, int *y) {

   int temp;

   temp = *x; 
   *x = *y;   
   *y = temp;   
   return 0;
}
int main () {
   int a = 100;
   int b = 200;
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
   swap(&a, &b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}
