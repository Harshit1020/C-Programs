//Insertion in array.....
#include<stdio.h>

int main(){
      
     
    printf("Welcome to the -insertion in array-\n");
    int n;
    printf("Enter the size of array:");
    scanf("%i",&n);
    int a[n];
    int a1[n+1];
    for(int i=0; i<n; i++){
               scanf("%i",&a[i]);
    }
    int pos;
    int newnum;
    printf("enter the position you wanna insert a number:");
    scanf("%i",&pos);
    printf("enter the new number you wanna insert:");
    scanf("%i",&newnum);

     for(int i=0; i<pos-1; i++){


       a1[i]=a[i];

     }
  
   a1[pos-1]=newnum;

   for(int i=pos-1; i<n; i++){

          a1[i+1]=a[i];

   }
  
   for(int i=0; i<=n; i++){
      printf("%i\n",a1[i]);

   }
    return 0;

}