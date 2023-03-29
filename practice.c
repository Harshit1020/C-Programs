/*#include<stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter the size of aaray:");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {

        scanf("%i",&a[i]);

    }
     
     for(int i=0; i<n-1; i++){

          for(int j=0; j<n-1-i; j++){

            if(a[j]>a[j+1]){

                  int temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
            }
          
          }

     }
         printf("its your sorted array");
       for(int i=0; i<n; i++){

              printf("%i ",a[i]);          
 

       }

      int search;
      printf("enter the number you wanna search"); 
      scanf("%i",&search);

      int start=0;
      int end=n-1;
     int  mid= (start+end)/2;
     

         while(start<=end){


            if(a[mid]==search){


                  printf("found");
                  break;

            }
             else if(a[mid]>search){


                    end=mid-1;
                    mid=(start+end)/2;
                    printf("found");
                     break;
                    
             }
             else if(a[mid]<search){


                  end=mid+1;
                  mid=(start+end)/2;
                  printf("found");
                   break;
                  


             }
             
         }
    return 0;
    }*/


/*#include<stdio.h>
int main(){

    int n;
    printf("enter the size of arr:");
    scanf("%i",&n);
    int a[n];
    for(int i=0; i<n; i++){
        
        scanf("%i",&a[i]);

    }

   for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1-i; j++){

           
           if(a[j]>a[j+1]){
               
              int temp= a[j+1];
              a[j+1]=a[j];
              a[j]=temp;

             }
        }
   }
printf("its your sorted  aray:");
for(int i=0; i<n; i++){

  printf("%i ",a[i]);

}

int search;
printf("enter the value you wanna search:");
scanf("%i",&search);

int start=0;
int end=n-1;
int mid=(start+end)/2;
int found=0;

while(start<=end){

 if(a[mid]==search){

       printf("%i found",a[mid]);
       found=1;
       break;

 }
 
 else if (a[mid]>search){

         
 end=mid-1;
mid=(start+end)/2;

 }
   
else{

           start=mid+1;
           mid=(start+end)/2;
  }


}
if(found==0){


printf("wrong choice");


}
return 0;
}*/


/*#include<stdio.h>

  void large(int *arr){

       int max=0;
    for(int i=0; i<8; i++){

           
           if(arr[i]>arr[max]){


                 max=i;

           }
    }
        
   printf("max is %i",arr[max]);


     int secondmax=0;

     for(int i=0; i<8; i++){


           if(arr[i]>arr[secondmax]  && i!=max){


                         secondmax=i;


           }

     }


       printf("second max is %i",arr[secondmax]);



  }



int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    large(arr);


  return 0;
}*/



/*#include<stdio.h>


int main(){

      int n;
      printf("enter the size of arr: ");
      scanf("%i",&n);

      int a[n];
for(int i=0; i<n; i++){

  scanf("%i",&a[i]);
}
for(int i=0; i<n-1; i++){

  for(int j=0; j<n-1-i; j++){


               if(a[j]>a[j+1]){

                      int temp=a[j+1];
                      a[j+1]=a[j];
                      a[j]=temp;

               }

  }

}
 
 printf("its your sorted arr:");
 for(int i=0; i<n; i++){
      printf("%i ",a[i]);

 }

int search;
printf("enter the number you wanna search:");
scanf("%i",&search);

int start=0;
int end=n-1;
int mid=(start+end)/2;
int count=0;
while(start<=end){
   
   if(a[mid]==search){

         printf("found %i",a[mid]);
         count++;
         break;

   }
else if(a[mid]>search){

           end=mid-1;
           mid=(start+end)/2;

}
else{

      
        start=mid+1;
        mid=(start+end)/2;
}

}
if(count==0){

 printf("wromg no");


} 


return 0;
}*/





/*#include<stdio.h>

void pali(int n){


        int rem;
        int rev=0;
        int copy=n;

while(n>0){
 
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
            
}
if(rev==copy){


 printf("palindrom!");

}
else{

 printf("not");

}

}

int main(){

     int n;
     printf("enter the numbr:");
     scanf("%i",&n);

     pali(n);

   return 0;

}*/

#include<stdio.h>

int main(){
 
         char str[]="lavde";  
         int size=sizeof(str)/sizeof(str[0]);
         int start=0;
        int end=size-2;
        while (start<end)
        {
          char temp=str[start];
          str[start]=str[end]; 
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