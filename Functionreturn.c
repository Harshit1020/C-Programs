//Sum of the array
#include<stdio.h>


 int arrsum(int *a,int n,int sum){

        for(int i=0; i<n; i++){
 
           printf("%i ",*(a+i));

        }
       for(int i=0; i<n; i++){

         sum=sum+*(a+i);
       }
   
     return sum;

}

int main(){

        int n;
        printf("enter the sizeof array :");
        scanf("%i",&n);

        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){


            scanf("%i",&a[i]);

        }
     int ans=arrsum(a,n,sum);
     printf(" sum is:%i",ans);
}
