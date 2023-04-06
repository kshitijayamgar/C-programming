//array of strings
#include<stdio.h>
void main(){
        char frds[3][10]=  //[R] [c]
        {"aasha","kanha","rahul"};
        printf("%p\n",&frds);
        printf("%p\n",frds);
        printf("%p\n",frds[0]);

        //printf("%p\n",&frds);
        for(int i=0;i<3;i++){
           for(int j=0;j<5;j++){
           printf("%c",frds[i][j]);
           }
           printf("\t");
         }
        printf("\n");
        //printf("%p\n",frds[0]);



}
