//Searching in array....
#include<stdio.h>

int main(){ 
    printf("welcome to the -Searching in array:\n");
    int n;
    printf("enter the size of array:");
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

            printf("%i",search);
            count++;

       }
       }
if(count==1){

  printf("found");
}
else{

      printf("not found");
}

   return 0;
}
