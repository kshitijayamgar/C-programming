//own function for copy the string
//mystrcpy

#include<stdio.h>

char * mystrcpy(char *dest,char *src){

        while(*src!='\0'){

                *dest=*src;

                dest++;

                src++;

        }

        dest='\0';

        return dest;

}

void main(){

        char *str1="rudra";

        char str2[10];

        puts(str1);

        puts(str2);

       mystrcpy(str2,str1);

        puts(str1);

        puts(str2);

}
