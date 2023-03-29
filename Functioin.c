//function 
//datatype name
//void 
/*#include<stdio.h>

void printing(int a,int b)
{

   printf("sum is %i",a+b);
}
int main()
{
   printf("enter the no.");
   int a, b;
   scanf("%i  %i",&a, &b);
   printing(a,b);

   return 0;
}*/

//palindrome number

/*#include<stdio.h>


void cheakpali(int n) 
{
       int rem;
       int rev=0;
       int copy=n;
        while(n>0){

             rem=n%10;
             rev=(rev*10)+rem;
             n=n/10;
        }

        if(copy==rev){

           
           printf("palindrom!!");
          
        } 
        else{

           printf("not palindrome");

        }  

}

int main()
{
   int n;
   printf("entr a number:");
   scanf("%i",&n);
   cheakpali(n);
   return 0;
}*/


//Array Function
/*#include<stdio.h>
void cheak(int *arr){


         for(int i=0; i<8; i++)
         {
            printf("%i   ",*(arr+i));
         } 
}
int main(){

        int arr[]={1,12,13,2,14,26,67,69};
        cheak(arr);
        return 0;

}*/

//one value 
// *value dega
// without *pointer address dega 
/*#include<stdio.h>

void get(int *a){


    printf("%i",a);
}
int main()
{


   int a[]={1,12,23,34,45,6,7,54,44};
   get(a);
   return 0;
}*/


      
      #include<stdio.h>

      void get(int *a,int n){


           for(int i=0; i<n; i++){


             printf("%i  ",*(a+i));

           }



      }

      int main(){


         int n;
         printf("enter the value :");
         scanf("%i",&n);
         int a[n];
         for(int i=0; i<n; i++){



           scanf("%i",&a[i]);
         }
        
         get(a,n);
         return 0;

      }










