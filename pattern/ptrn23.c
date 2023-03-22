/*
 
 1 A 2 B
 1 A 2
 1 A 
 1   


*/
#include<stdio.h>
void main(){
        
 for(int i=1;i<=4;i++){
            int x=1;
            char ch='A';
   for(int j=4;j>=i;j--){
             if(j%2==0){
		
	    printf(" %d ",x);
	    x++;

         }
	if(j%2!=0){
	 
	 printf("%c",ch); 
	   ch++;
	}
        // printf("\n");
    }
        printf("\n");
   }
}

