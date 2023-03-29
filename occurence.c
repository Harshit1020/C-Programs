#include<stdio.h>

int main()
{
    int arr[]={1,1,1,1,1,1,1,2,3,4,5,4,3};
    int occurence[]={0,0,0,0,0,0,0,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

            
          occurence[arr[i]]++;

    }
     int max=0;
     for(int i=0; i<10; i++){

         if(occurence[i]>occurence[max]){


              max=i;


         }


     }

        printf("maximum value is %i of %i times:",max,occurence[max]);
        return 0;
}