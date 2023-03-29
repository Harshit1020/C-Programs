#include<stdio.h>

int main(){
    
    int n; 
    printf("enter the size of arr:");
    scanf("%i",&n);
    
    int a[n];
    int a2[n+1];
   
    for(int i=0; i<n; i++){
        
        scanf("%i",&a[i]);
        
    }
     
  int pos;
  printf("enter the positon:");
  scanf("%i",&pos);
  int number;
  printf("enter the new number:");
  scanf("%i",&number);
  
  for(int i=0; i<pos-1; i++){
      
      
      a2[i]=a[i];
      
  }
  
  a2[pos-1]=number;
  
  
  for(int i=pos-1; i<n; i++){
      
      
      a2[i+1]=a[i];
    
  }
  
  for(int i=0; i<=n; i++){
      
      printf("%i ",a2[i]);
      
  }
  
  return 0;
}