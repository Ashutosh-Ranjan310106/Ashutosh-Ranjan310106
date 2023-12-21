#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    char c[100];
    printf("Enter a string1:- ");
    gets(a);
    char b[100];
    strcpy(b,strrev(a));
    if (strcmp(b,a)==0){
        printf("String is Palindrome");
    }
    else{
       printf("String is not Palindrome"); 
    }
    printf("\nlength of string:- %d\n",strlen(a));
    printf("Enter a string2:- ");
    gets(c);
    strcat(a,c);
    printf("Concatenated String:- %s",a);
    return 0;

}
