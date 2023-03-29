#include<stdio.h>

int main(){

  int n;
  int rem;
  printf("enter the decimal number :");
  scanf("%i",&n);

 while(n>0){

       rem=n%2;
       printf("%i",rem);
        n=n/2;

         

 }

  return 0;
}

