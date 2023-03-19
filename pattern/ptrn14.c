/* a  A  a 
   b  B  b 
   c  C  c 
*/
#include<stdio.h>
void main(){
        char ch='a';
  for (int i=1;i<=3;i++){
     for(int j=1;j<=3;j++){
          if(j%2==0){

           printf(" %c ",ch-32);
            }
          else{
             printf(" %c ",ch);
          }
	  
        }

     ch++;  

        printf("\n");
   }
  printf("\n");
}

