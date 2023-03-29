//Real binarry search
#include<stdio.h>

int main(){

 int n;
 int i,j;
 printf("enter the size of arr:");
 scanf("%i",&n);
 int a[n];
 for(int i=0; i<n; i++){

    scanf("%i",&a[i]);
        
 } 

 for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1-i; j++)
      
    {
        if(a[j]>a[j+1]){

            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;

        }
    }

 }

 printf("your sorted arr is:");
 for(int j=0; j<n; j++){

    printf("%i ",a[j]);

 }

  int search;
  printf("enter the number you search:");
  scanf("%i",&search);
   
   int start=0;
   int end=n-1;
   int mid=(start+end)/2;
   int found=0;

   while(start<=end){

    if(a[mid]==search){

          
         printf("%i found ",a[mid]);
         found=1;
         break;

    }

    else if(a[mid]>search){

             end=mid-1;
             mid=(start+end)/2;
             
    }
    else{

        start=mid+1;
        mid=(start+end)/2;
        
    }
 }
   if(found==0){

printf("not found wrong choice");

   }

  return 0;
  }

