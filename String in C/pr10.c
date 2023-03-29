//librabry functn strlen

#include<stdio.h>
#include<string.h>
void main(){
        char name[]={'k','r','i','t','i','\0'};
        char *str="tiger shroff";
        int lenname=strlen(name);
        int lenstr=strlen(str);
        printf("name length:%d\n",lenname);
        printf("str length:%d\n",lenstr);
}
