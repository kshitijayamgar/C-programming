/*printing sum of diagonal using function*/
#include<stdio.h>
const int m=3;
const int n=3;
int diaArr(int array[m][n]){
        int sum=0;
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
          if(array[i]==array[j]){
            sum=sum+array[i][j];
           }
        }
     }

 printf("sum of diagonal is:%d\n",sum);

}

void main(){
       int arr[][3]={10,20,30,40,50,60,70,80,90};
        //int size=sizeof(arr)/sizeof(int);
        diaArr(arr);
      //  int x= diaArr();
        //printf("sum of diagonal is:%d\n",x);
}
