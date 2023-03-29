#include<stdio.h>

int main(){

      char nm[]="harshit Dongre";
      int size=sizeof(nm)/sizeof(nm[0]);
      char new[size];

   int count=0;

   for(int i=size-2; i>=0; i--){


            new[count]=nm[i];
            count++;

   }

  new[size-1]='\0';
   int i=0;
  while(new[i]!='\0'){


        printf("%c",new[i]);
        i++;

  }
 
       return 0;

}