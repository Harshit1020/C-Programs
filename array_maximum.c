#include<stdio.h>

int main()
{
    int n;
    printf("entr the size of arr:");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i<n; i++){

       
       scanf("%i",&a[i]);



    }
      
      int max=0;
      int secondmax=0;
      for(int i=0; i<n; i++){

         
        if(a[i]>a[max]){


            max=i;


        }
      }

      for(int i=0; i<n; i++){


        if(a[i]>a[secondmax] && i!=max){


             secondmax=i;

        }
      }
      printf("max is %i\nand secondmax is%i",a[max],a[secondmax]);
      return 0;
}