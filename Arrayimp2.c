#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  int arr[]={5,3,10,9,6,3,5,2,4,3,1,3,5,9,1,1,1,1,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  int *newarr=(int*)calloc(10, sizeof(int*));
  for(int i=0; i<size; i++)
{

 newarr[arr[i]]++;

}
for(int i=0; i<10; i++){

        if(newarr[i]>=2){

           printf("for %i times %i\n",newarr[i],i );
        }
}
   return 0;
}


