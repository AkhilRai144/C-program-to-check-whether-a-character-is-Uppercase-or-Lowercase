//C program to check whether a character is Uppercase or Lowercase

#include<stdio.h>

int main(){
    char ch;

    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
      printf("%c is lowercase alphabet",ch);
    }else if(ch>='A' && ch<='Z'){
        printf("%c is uppercase alphabet",ch);
    }else{
        printf("Enter valid character.");
    }



    return 0;
}