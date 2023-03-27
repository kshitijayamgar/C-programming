//prooof prg for  string is read until \0 
#include<stdio.h>
void main(){
        char pname[]={'r','o','h','i','t','\0','v','a','d','a'};
        char *str="viratk";
        for(int i=0;i<12;i++){
                printf("%c",pname[i]);
        }
        printf("\n");
        printf("%s\n",pname);
        printf("size:%ld",sizeof(pname));
        printf("\n");
        for(int i=0;i<6;i++){
                printf("%c",*(str+i));
        }
        printf("\n");
}
