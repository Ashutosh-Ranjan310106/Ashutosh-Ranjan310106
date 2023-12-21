//String Reverse without Library Function: Write a program to reverse a string (array of char) without using string library functions.
#include<stdio.h>
int main(){
    char a[100]="ashutosh ranjan";
    printf("before:- %s\n",a);
    int l=0;
    for (int i=0;a[i] != '\0';i++){
       l+=1; 
    }
    char c;
    for (int i=0;i<l/2;i++){
        c=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=c;
    }
    printf("after:- %s",a);

    return 0;
}
