#include<stdio.h>
void main(){
        int arr[]={10,20,30,40,50};
        printf("arr[i]\n");
        for(int i=0;i<5;i++){
          printf("|%d|",arr[i]);
         }
        printf("\n");
        printf("i[arr]\n");
        for(int i=0;i<5;i++){
		
          printf("|%d|",i[arr]);
           }
     printf("\n");
}
/*In c arrays are resolved using pointer either u use pointer or not…

if you replace arr[0] with 0[arr], the output would be same. Because compiler converts the array operation in pointers before accessing the array elements.

e.g. arr[0] would be *(arr + 0) and therefore 0[arr] would be *(0 + arr) and you know that both *(arr + 0) and *(0 + arr) are same.*/
