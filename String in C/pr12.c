//library function strcpy

#include<string.h>

#include<stdio.h>

void main(){

        char *str1="rudra";

        char str2[10];

        puts(str1);

        puts(str2);

        strcpy(str2,str1);

        puts(str1);

        puts(str2);

}
