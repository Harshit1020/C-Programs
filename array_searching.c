
#include<stdio.h>

int main()
{

   int n;
   printf("enter the size of aaray:");
   scanf("%i",&n);
   int a[n];
   for(int i=0; i<n; i++){

       
        
     scanf("%i",&a[i]);



   }
   
   int search;
   int count=0;
   printf("enter the value you wanna search:");
   scanf("%i",&search);
   for(int i=0; i<n; i++){


       if(a[i]==search){

         printf("%i\n",search);
         count++;
       }

   }
   if(count==0){


       printf("not found");
   }
  else{

      printf("found!");
  }
  
    return 0;
}