//write a function which will take an aaray and will return the sum of all elements of the array
/*#include<stdio.h>


void get(int *a,int n,int sum){

        
           for(int i=0; i<n; i++){


             printf("%i  ",*(a+i));
             sum=sum+*(a+i);
       }

       printf("sum is %i",sum);



      }

      int main(){


         int n;
         printf("enter the value :");
         scanf("%i",&n);
         int a[n];
         int sum=0;;
         for(int i=0; i<n; i++){



           scanf("%i",&a[i]);
         }
        
         get(a,n,sum);
         return 0;

      }*/
      
//divide Even odd by using function
      #include<stdio.h>

     void divideevenodd(int *arr){

            int newarr[12];
            int count=0;
           for(int i=0; i<12; i++){


              if(*(arr+i)%2==0){

                   newarr[count]=*(arr+i);
                   count++;

              }

           }
        

         for(int i=0; i<12; i++){


              if(*(arr+i)%2!=0){

                   newarr[count]=*(arr+i);
                   count++;
                   
                   }
         }
        
        
        for(int i=0; i<12; i++){
          printf("%i ",newarr[i]);
    }
     }

    int main()
      {
        
          int arr[]={1,2,3,4,5,6,7,8,11,12,13,14};
          divideevenodd(arr);
          

          return 0;
     }







