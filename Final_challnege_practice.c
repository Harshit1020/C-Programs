// array
// string
// pointers
// function

/*#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[]={1,2,3,4,5,6,7,5,3,3,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);

    int *newarr=(int*)calloc(10,sizeof(int*));

    for(int i=0; i<size; i++){

            newarr[a[i]]++;
    }

 for(int i=0; i<10; i++){

if(newarr[i]>=2){
      printf("%ifor %i times\n",newarr[i],i);
}

 }


      return 0;

}*/

/*#include<stdio.h>

int main(){

            int a[]={1,2,3,4,5,6,7,8,9,4,3,2,3};
            int size=sizeof(a)/sizeof(a[0]);

            for(int i=0; i<size; i++){

                int largest=-1;
                for(int j=i+1; j<size; j++){

                   if(a[j]>a[i]){

                    largest=a[j];
                    break;

                   }


                }

 printf("%i=%i is lagest no\n",a[i],largest);

            }
return 0;

}*/

/*#include<stdio.h>
#include<stdlib.h>

int main(){

      char nm[]="Harshit Dongre";
      int size=sizeof(nm)/sizeof(nm[0]);
      char new[size];

     int count=0;
 for(int i=size-2; i>=0; i--){

       new[count]=nm[i];
       count++;
 }
     new[size-1]='\0';
     int i=0;

     while (new[i]!='\0')
     {
           printf("%c",new[i]);
           i++;
     }
      return 0;
}*/

/*#include<stdio.h>

int main(){

    char str[]="Q, R, S, T, U, V, W, X, Y, Z,A, B, C, D, E, F, G, H, I, J, K, L M N O P";
    int size=sizeof(str)/sizeof(str[0]);


for(int i=0; i<size-2; i++){

  for(int j=0; j<size-2; j++){

   if(str[j]>str[j+1]){

        char temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;

   }

  }

}

int i=0;
while(str[i]!='\0'){

  printf("%c ",str[i]);
  i++;

}
      return 0;
}*/

/*#include<stdio.h>

int main(){

        int i,j,n;
        printf("enter the size of ar:");
        scanf("%i",&n);
        int a[n];
      for(int i=0; i<n; i++){
              scanf("%i",&a[i]);

        }

 for(int i=0; i<n; i++){
       printf("%i ",a[i]);
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

printf("its your sorted arrays:");
for(int j=0; j<n; j++){
      printf("%i ",a[j]);
}

int search;
printf("enter the number:");
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
else if(a[mid]>search){

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

int main(){

      int data[]={1,2,3,4,3,4,3,3,5,6,7,8,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
      int size=sizeof(data)/sizeof(data[0]);
      int occu[]={0,0,0,0,0,0,0,0,0};

     for(int i=0; i<size; i++){

          occu[data[i]]++;
     }
  int max=0;
     for(int i=0; i<10; i++){

if(occu[i]>occu[max]){

      max=i;
}
 }

 printf("%i is max value of %i times",max,occu[max]);
      return 0;
}*/

/*#include<stdio.h>


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
      while(nm[i]!='\0'){

            printf("%c",nm[i]);
            i++;
      }

return 0;
}*/

/*#include<stdio.h>

int main(){

      char str[]="harshit Dongre be consistant";
      int size=sizeof(str)/sizeof(str[0]);
      int start=0;
      int end=size-2;
      while(start<=end){

                  char temp=str[start];
                  str[start]=str[end];
                  str[end]=temp;
                  start++;
                  end--;

      }

      int i=0;
      while (str[i]!='\0')
      {
            printf("%c",str[i]);
            i++;
      }

      return 0;
}  */

/*#include<stdio.h>

int main(){

      char str[]="qwertyuiasdfghjkbvcxzoiuytrewkjhgfdxcvbn";
      int size=sizeof(str)/sizeof(str[0]);

      for(int i=0; i<size-2; i++){

            for(int j=0; j<size-2; j++){

                  if(str[j]>str[j+1]){

                        char temp=str[j];
                        str[j]=str[j+1];
                        str[j+1]=temp;
                  }
            }
      }
      int i=0;
      while(str[i]!='\0')
      {
                  printf("%c ",str[i]);
                  i++;

      }

      return 0;
}*/

/*#include <stdio.h>

int main()
{

      char str[] = "harshait dongre";
      int size = sizeof(str) / sizeof(str[0]);
      char newstr[size];
      int counter = 0;

      int i = 0;
      while (str[i] != '\0')
      {

            if (str[i] != 'a')
            {

                  newstr[counter] = str[i];
                  counter++;
            }

            i++;
      }

      for (int k = counter; k < size - 1; k++)
      {

            newstr[k] = 'a';
      }
      newstr[size - 1] = '\0';
      int j = 0;
      while (newstr[j] != '\0')
      {
            printf("%c", newstr[j]);
            j++;
      }

      return 0;
}*/

/*#include <stdio.h>

int main()
{

      char nm[] = "this like aai be consistent bby";
      int size = sizeof(nm) / sizeof(nm[0]);
      char nm2[size];
      nm2[size-1]='\0';
       size=size-2;
      int secondcount=0;
      int lastcount=size;

      for(int i=size; i>=0; i--){

            if(nm[i]== ' ' || i==0){

              if(i==0){


                    for(int j=0; j<=lastcount; j++){

                          nm2[secondcount]=nm[j];
                          secondcount++;
                  }

                  lastcount=i-1;
              }
else{

        for(int j=i+1; j<=lastcount; j++){

      nm2[secondcount]=nm[j];
      secondcount++;


        }
         nm2[secondcount]=' ';
        lastcount=i-1;
       secondcount++;

}
}
 }

            int i=0;
            while (nm2[i]!='\0')
            {
                 printf("%c",nm2[i]);
                 i++;
            }
(
      return 0;
}*/
// function
/*#include<stdio.h>

void cheackpali(int n){

      int rem;
      int rev=0;
      int copy=n;
      while(n>0){

            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
      }
 if(copy==rev){

       printf("nuber is paliii");
 }
else{

printf("not pali");

}

}
int main(){
      
      int n;
      printf("enter the numbr:");
      scanf("%i",&n);
      cheackpali(n);
       return 0;
}*/

/*#include<stdio.h>

void get(int *a, int n){

 for(int i=0; i<n; i++){



       printf("%i ",*(a+i));

 }

}
int main(){
     int n;
     printf("enter the size:");
     scanf("%i",&n);
     int a[n];
     for(int i=0; i<n; i++){

           scanf("%i",&a[i]);
     } 

     get(a,n);
      return 0;
}*/


