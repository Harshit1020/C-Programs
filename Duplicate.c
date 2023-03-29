#include<stdio.h>

int main(){

     int n;
     printf("enter the size of arr:");
     scanf("%i",&n);
     int a[n];
     for(int i=0; i<n; i++){

                scanf("%i",&a[i]);
     }
      
    int dup;
    printf("kiska duplicate:");
    scanf("%i",&dup);
    int count=0;

    for(int i=0; i<n; i++){

 
               if(a[i]==dup){

                 printf("%i ",a[i]);
                       count++;

               }
               
    }
        
        printf("the duplicatte is %i and cound is %i ",dup,count);
         
      return 0;
  
}