//own function for mystrncpy
//mystrncpy
#include<stdio.h>
char * mystrncpy(char * dest,char * src,int n){
        while(*src!='\0'&& *dest!='\0'){
                *dest=*src;
                dest++;
                src++;
                n--;
    }
        *dest='\0';
        return dest;
}
void main(){
        int n=5;
        char *str1="patil";
        char str2[30]={'p','r','e','m','\0'};
        puts(str1);
        puts(str2);
        mystrncpy(str2,str1,n);
        puts(str1);
        scanf("%[^5]",str2);
        printf("%s",str2);
}
