//To find out that can we intialize the declared string constant or not??
#include<stdio.h>
void main(){
        char arr[20];
        printf("enter string:\n");
         gets(arr);
         puts(arr);
         char *str;
	 printf("enter string:\n");
         gets(str);
         puts(str);
	 

}
/* As we declare char  array first then intialize it,
  like that we can not declare string constant first and then initialize it
  this program give you the segmentation fault at end
  */
