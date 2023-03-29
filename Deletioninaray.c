#include<stdio.h>

int main(){

int n;
printf("Enter the size of array:");
scanf("%i",&n);
int a[n];
for(int i=0; i<n; i++){

   scanf("%i",&a[i]);

}
int pos;
printf("enter the position you wanna delete a number:");
scanf("%i",&pos);

for(int i=pos-1; i<n; i++){
 
   a[i]=a[i+1];
    
}

for(int i=0; i<n-1; i++){

    printf("%i ",a[i]);

}
return 0;
}





