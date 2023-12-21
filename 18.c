//Multi-level Menu using Switch Case: Write a program to create a multi-level menu using switch cases that perform various basic mathematical operations (Add, Subtract, Divide, Multiply, Exponent).
#include<stdio.h>
int main(){
    char a;
    printf("choose from (+,-,/,*,^):- ");
    scanf("%c",&a);
    int num1;
    printf("enter num1:- ");
    scanf("%d",&num1);
    int num2;
    printf("enter num2:- ");
    scanf("%d",&num2);
    int num3;
    switch (a){
        case '+':
            num3=num1+num2;
            break;
        case '-':
            num3=num1-num2;
            break;
        case '/':
            num3=num1/num2;
            break;
        case '*':
            num3=num1*num2;
            break;
        case '^':
            num3=num1^num2;
            break;
    }
    printf("result:- %d",num3);
}
