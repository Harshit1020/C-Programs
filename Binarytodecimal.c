#include<stdio.h>
#include<math.h>


int main(){

   int n=1000001;
   int sum=0;
   int count=0;
   int rem;

   while(n>0){


       rem=n%10;
       sum=sum+(rem*pow(2,count));
       n=n/10;
       count++;

   }
  printf("sum is %i",sum);


  return 0;

}
















