/*#include<stdio.h>

int main(){

    int n;
   int sum=0;
    int numbercopy=n;
    int i;
     printf("enter the number:");
    scanf("%i",&n);


while(numbercopy>0){
            int lastnum=numbercopy%10;
                  int facto=1;
             for( i=1; i<=lastnum; i++){

                facto=facto*i;                   
}

         sum=sum+facto;
         numbercopy=numbercopy/10;  


}
    if(sum == n){

        printf("special no");
    }
    else{

    printf("not speci");
}

     return 0;
}*/


#include<stdio.h>

int main()
{
int temp,n,fact,num,sum=0,i;
printf("enter the num");
scanf("%i",&num);
temp=num;
sum=0;
while(temp>0)
{
n=temp%10;
fact=1;
for(i=1;i<=n;i++)
fact=fact*i;
sum=sum+fact;
temp=temp/10;
}
if(sum==num){
printf("hey its a special number"); }
else{
      printf("not a special number");
}
        return 0;
}
