#include <stdio.h>
#include <stdlib.h>
 
// Function to return the sum of 2 numbers
int sum(int a, int b) {
    return a + b ;
}
 
// function to greet hello to user and call the sum function to
// print the sum of two numbers. It implements the callback method.
void Hello(int (*fptr) (int, int)) {
    printf("In Hello function!\n") ;
    printf("Sum of 7 and 5 is %d\n", fptr(5, 7)) ;
}
 
// Function to greet Good morning to user and call the sum function
// to print the sum of 2 number. It implements the callback method.
void Hii(int (*fptr) (int, int)) {
    printf("In Hii function!\n") ;
    printf("Sum of 7 and 5 is %d\n", fptr(5, 7)) ;
}
 
// main function
int main() {
 
    // Declare a function pointer to store the address of another function
    int (*ptr)(int, int) ;
    // assign sum function to function pointer
    ptr = sum ;
 
    // call the hello function and pass ptr as argument in it.
    Hello(ptr) ;
    printf("\n") ;
    // call the greetUser function and pass ptr as argument in it.
    Hii(ptr) ;
    return 0 ;
}



/*
     In Hello function!
Sum of 7 and 5 is 12

In Hii function!
Sum of 7 and 5 is 12

*/
