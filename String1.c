// string reverse
#include<stdio.h>
int main(){

         char str[]="edval";
         int size=sizeof(str)/sizeof(str[0]); 
          int start=0;
          int end=size-2;

        while(start<=end){

            char temp=str[start];
             str[start]= str[end];
               str[end]=temp;

               start++;
               end--;
            

        }       
         
       int i=0;

       while(str[i]!='\0'){

          printf("%c",str[i]);
          i++;
       } 
    return 0;
}