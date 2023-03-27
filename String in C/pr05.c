//basic concepts on string array
#include<stdio.h>
void main(){
        char name[]={'R','o','h','i','t','\0'};
        char *str="DhoniM";
       for(int i=0;i<8;i++){ //here we can see array can read out of the string we have 6 charactrs(including \0) in Rohit but array can also                              // read beyond the array without any error  
           printf("%c",name[i]);
       }
       printf("\n");
   for(int i=0;i<7;i++){
     // printf("%c",str[i]);
      printf("%c",*(str+i));
   }
   printf("\n");
}
