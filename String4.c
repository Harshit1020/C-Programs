// Strings in accending order 
#include<stdio.h>

int main()
{
        char str[]="uiyyteartyuiplkssdlscvbru";
        int size=sizeof(str)/sizeof(str[0]);
         for(int i=0; i<size-2; i++){

            for(int j=0; j<size-2-i; j++){

                  if(str[j]>str[j+1]){

                      char temp=str[j];
                      str[j]=str[j+1];
                      str[j+1]=temp;
                      
                  }
            }
         }

         int i=0; 
         while (str[i]!='\0')
         {
               printf("%c ",str[i]);
                 i++;
         }
   return 0;

}