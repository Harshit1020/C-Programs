//wap to pring next greater elements in a given unsorted arr elements for which 

#include<stdio.h>

int main()
{
  
  int arr[]={5,3,10,9,6,13,5,2,4,3};
  int size=sizeof(arr)/sizeof(arr[0]);
int j=0;
  for(int i=0; i<size; i++){
   
             int largest=-1;

          for(int j=i+1; j<size; j++){

              if(arr[j]>arr[i]){

               largest=arr[j];
                break;                 
      }
   
}

    printf("for %i= %i is next largest\n",arr[i],largest);

  }
    return 0;
}