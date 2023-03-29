#include<stdio.h>

int main()
{
       int arr[]={1,2,3,5,6,7,7,8};
       int size=sizeof(arr)/sizeof(arr[0]);
      
       int negativeindex=0;
       for(int i=0;  i<size; i++){

               if(arr[i]<0){

                   negativeindex++;
               }
       }


    if(negativeindex==0){

        
          for(int i=0;  i<size; i++){
           printf("%i ",arr[i]);            
       

          }

          }
       

   /* else{

       for(int k=0; k<negativeindex; k++){

         int new=0;
         for(int i=0; i<size; i++){


            if(arr[i]<0){
 
             new=i;
             break;
    
            }

         else{

         for(int i=0; i<size-negativeindex; i++){


            printf("%i",arr[i]);
         }


         }*/ 
         
    return 0;
}
