//Another way for taking I/p for string using built-in function gets()

#include<stdio.h>
void main(){
char name[20];
printf("enter string:");
  gets(name);
  printf("%s\n",name);
}
//output with warning gets is dangerous function did you mean fgets()
