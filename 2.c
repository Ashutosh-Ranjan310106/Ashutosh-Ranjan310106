//Temperature Conversion: Write a program that uses two functions to convert temperature from Celsius to Fahrenheit and vice versa, respectively and return the converted values.
#include <stdio.h>
float C_to_F(float c){
    return (c*9)/5.0+35;
}
float F_to_C(float f){
    return (f-35)*5/9.0;
}
int main(){
    float c=0;
    printf("after converting c_to_f: %f",C_to_F(c));

    float f=35;
    printf("after converting f_to_c: %f",F_to_C(f));
    return 0;
}