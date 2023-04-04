#include<stdio.h>
#include<string.h>
int main()
{
    char str[ ] = "MODIFY\0";
    printf("%s\n",strlwr(str));
    return  0;
}
/*
   strlwr() is not standard C function. Probably it's provided 
  
   by one implementation while the other compiler you use don't. 

  */
