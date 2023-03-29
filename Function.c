
//Create a function accept 2 array and merge them
#include<stdio.h>


void mergearr(int *arr,int *arr1){

    int newarr[8];
    for(int i=0; i<4; i++){


         newarr[i]=*(arr+i);

    }
      for(int i=0; i<8; i++){

          
         newarr[i+4]=*(arr1+i);

}


for(int i=0; i<8; i++)
{

   printf("%i",newarr[i]);


}
}

int main(){
     

     int arr[]={1,2,3,4};
     int arr1[]={6,7,8,9};

     mergearr(arr,arr1);
     return 0;


}