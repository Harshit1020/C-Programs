/*#include<stdio.h>

int main(){

    for(int i=1; i<4; i++){

     for(int j=1; j<5; j++){


          printf("* ");

     }
    

     printf("\n");


    }

      return 0;


}*/

/*#include<stdio.h>

int main(){

         for(int i=1; i<6; i++){


            for(int j=1; j<=6-i; j++)
            {


              printf("* ");



            }

            printf("\n");
         }
        
      return 0;

}*/


#include<stdio.h>

int main()
{
     for( int i=1; i<6; i++){

         
        for(int j=1; j<6; j++){

          if(i-j>0){


               
               printf("  ");

          }
             else{

                 printf("* ");
             }   

        }
        printf("\n"); 
     }

    return 0;
}





