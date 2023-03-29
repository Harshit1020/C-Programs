#include<stdio.h>

int main(){

   int n;
   printf("enter the number ");
   scanf("%i",&n);
    int rev=0;
    int count=0;
    int rem;
    int copy=n;
    int sum=0;
    while(n>0){

         rem=n%10;
         sum=sum+rem;
         n=n/10;


    }

     int ncopy=sum;

    while (sum>0){


         rem=sum%10;
         rev=(rev*10)+rem;
         sum=sum/10;
     
    }
 int multi=rev*ncopy;
    if(copy==multi){

        printf("yeeee magic ho gya");

    }
   else{

     printf("not sorry");

   }

  return 0;
}




