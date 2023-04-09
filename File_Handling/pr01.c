*/ Why do we need File Handling in C?

The output of a C program is generally deleted when the program is closed. 
Sometimes, we need to store that output for purposes like data analysis, 
 presentation, comparison of output for different conditions,  etc. 
  use of file handling is exactly what the situation calls for
          
  1)Reusability: The file-handling process keeps track of the information created after the program has been run.
  2)Portability: Without losing any data files can be transferred to another in the computer system. The risk of flawed coding is minimized     with this feature.
  3)Efficient: A large amount of input may be required for some programs. File handling allows you to easily access a part of a code using individual commands which saves a lot of time and reduces the chance of errors.
  4)Storage Capacity: Files allow you to store data without having to worry about storing everything simultaneously in a program


*/

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
