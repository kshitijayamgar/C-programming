//own function for changing the string to  lower case

#include<stdio.h>
char * mystrlwr(char *str){
        while(*str!='\0'){
                if(*str>='A' && *str<='Z'){
                *str=*str+32;
                }
                str++;
        }

        return str;
}
void main(){
       char str[20]={'A','S','H','O','K','\0'};
 //char *str="ASHAK"; do not try change this type of string to  the lowercase you will get  segmentation  fault
        puts(str);
        mystrlwr(str);
        puts(str);
}

