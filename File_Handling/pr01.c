//program for create file using file handling function fopen()

#include<stdio.h>
void main(){
        FILE *fp=fopen("basic.txt","w");
        printf("%p\n",fp);
}
/*  
    In this program we use fopen() function for open the file,
    and with " W " write mode if the file dosent exist this fopen() with write mode also create the file.
    
    */
