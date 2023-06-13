#include<stdio.h>
typedef void (*callback_)( int val );
// Callback Function which has no argument and no return value
void callback_fn( int val )
{
    printf("In callback function, val = %d\n", val);
}
void test_loop( callback_ fn )
{
    for( int i = 0; i < 6; i++ )
    {
        if(i == 5)
        {
            // callback execution
            fn( i );
        }
        printf("i = %d\n", i);
    }
}
void main()
{
    // Registering the callback
    callback_  fn_ptr = &callback_fn;
      
    // calling the function with the function pointer
    test_loop(fn_ptr);
  
   return 0;
}
