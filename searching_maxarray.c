#include<stdio.h>

int main()
{
    int choice;
    printf("1. press one for searching\n2.press two for maximum number");
    scanf("%i",&choice);
if(choice==1){

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
}
 }

else if(choice==2){

    int n;
    printf("entr the size of arr:");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i<n; i++){

       
       scanf("%i",&a[i]);



    }
      
      int max=0;
      int secondmax=0;
      for(int i=0; i<n; i++){

         
        if(a[i]>a[max]){


            max=i;


        }
      }

      printf("max is %i",a[max]);


}
else{

    printf("wrong choice!!");
}

return 0;
}