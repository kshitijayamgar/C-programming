//own function for change the string to upper case 
//mystrupr
#include<stdio.h>
char * mystrupr(char *str){
        while(*str!='\0'){
                if(*str>=97&&*str<=122){
                        *str=*str-32;
                }
                str++;
          }
        return str;
}
void main(){
        char str[]={'g','e','e','t','a','\0'};
        puts(str);
        mystrupr(str);
        puts(str);
}


