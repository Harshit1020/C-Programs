#include<stdio.h>

int main(){

   int n;
   int sum=0;
 printf("enter the num:");
  scanf("%i",&n);
   int rem;
   int copy=n;

    while(n>0){

      
      rem=n%10;
      sum=sum+(rem*rem*rem);
      n=n/10;

    }
   if(copy==sum){

         printf("armstrong");
        
   }
   else{
 
      printf("not armstrong");

   }


  return 0;
}
