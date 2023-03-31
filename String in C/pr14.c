//library function strcpy
#include<string.h>
#include<stdio.h>
void main(){
        char *str1="rudra";
        char *str2="rudrika";
        puts(str1);
        puts(str2);
       int diff= strcmp(str1,str2);
        if(diff==0){
        printf("equal\n");

        }
        else{
        printf("not equal\n");
        }
}
