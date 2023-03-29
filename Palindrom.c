#include<stdio.h>

int main(){

   int n;
   printf("enter the number ");
   scanf("%i",&n);
    int rev=0;
    int count=0;
    int rem;
    int copy=n;

    while ((n>0)){


         rem=n%10;
         rev=(rev*10)+rem;
         n=n/10;
     

    }
    if(rev==copy){

              printf("palindrome!");
        }
  else{

         printf("not palindrom!");

  }

  return 0;
}


