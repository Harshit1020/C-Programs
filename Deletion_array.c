#include<stdio.h>

int main(){
    
    int n; 
    printf("enter the size of arr:");
    scanf("%i",&n);
    
    int a[n];
   
    for(int i=0; i<n; i++){
        
        scanf("%i",&a[i]);
        
    }
     
     int pos;
    //  int flg=0;
     printf("enter the position you wanna delete the value:");
     scanf("%i",&pos);
     
     for(int i=pos-1; i<n; i++){
         
          a[i]=a[i+1];
        
     }
for(int i=0; i<n-1; i++){
    
     printf("%i ",a[i]);
}

    return 0;
}