//array of char pointers
#include<stdio.h>
#include<string.h>
void main(){
 char *  arr[3]={"priya","meena","sai"};

 printf("arr[0]:%p\n",arr[0]);
 printf("arr[1]:%p\n",arr[1]);
 printf("arr[2]:%p\n",arr[2]);
      puts(arr[0]);
      printf("%s\n",arr[2]);
     // strcpy(arr[2],"naina"); try this
      puts(arr[0]);
      printf("arr[2]:%s\n",arr[2]);
}
