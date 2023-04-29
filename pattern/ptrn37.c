#include<stdio.h>

int main() {
  int n;
  printf("enter the row:\n");
  scanf("%d",&n);
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if ((i + j) % 2 == 0) printf("1 ");
      else printf("0 ");
    }
    printf("\n");
  }
  return 0;
}

/*
enter the row:4
output:-
1 
0 1 
1 0 1 
0 1 0 1 
*/
