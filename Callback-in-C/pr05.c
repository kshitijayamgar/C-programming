#include<stdio.h>
void my_function(){

   printf("This is a normal function.\n");
}

void my_callback_function(void (*ptr)()) {
 
    printf("This is callback function.\n");

   (*ptr)();    //calling the callback function
}

void main() {
   
  void (*ptr)() = &my_function;
  
  my_callback_function(ptr);
 }

