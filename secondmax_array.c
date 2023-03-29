#include<stdio.h>

int main(){

        int n;
        printf("enter the size of ar:");
        scanf("%i",&n);
        int a[n];
      for(int i=0; i<n; i++){
              scanf("%i",&a[i]);

        }
 
 for(int i=0; i<n; i++){
       printf("%i ",a[i]);
 }
 
 int max=0;
 int secondmax=0;
 for(int i=0; i<n; i++){

       if(a[i]>a[max]){
             max=i;
       }
 }
printf("first max num is %i",a[max]);
for(int i=0; i<n; i++){
      if(a[i]>a[secondmax] && i!=max){

            secondmax=i;
      }
}
printf("second max is %i",a[secondmax]);
return 0;
}
