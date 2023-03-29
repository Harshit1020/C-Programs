#include<stdio.h>


void armstrong(){

        int n;
        printf("enter the value:");
        scanf("%i",&n);
        int rem;
        int sum=0;
        int rev=0;
        int copy=n;

        while(n>0){

                rem=n%10;
                sum=sum+(rev*rev*rev);
                n=n/10;
        }

        if(copy==sum){

                printf("number is armstrong\n");
        }
        else{

               printf("number is not armstong\n");

        }



} 
void palindrom(){

                int n; 
                printf("enter the number:");
                scanf("%i",&n);
                int rem;
                int rev=0;
                int copy =n;

                while(n>0){

                        rem=n%10;
                        rev=(rev*10)+rem;
                        n=n/10;

                }

        if(rev==copy){

                    printf("number is palindrome!");
        }
        else{

                printf("number is not palindrom!");
        }
   }


void special(){

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

}
int main(){
          int choice=1;
        while (choice!=4)
        {
         printf("case 1:cheak for armstrong number:\n");
         printf("case 2:cheak for pallindrome number:\n");
         printf("case 3: cheak for special number:");
         printf("case 4: exit\n");
         printf("enter your choice\n");
         scanf("%d",&choice);
         switch (choice)
         {
         case 1:armstrong();
         break;
         case 2: palindrom();
         break;
         case 3: special();
          break;
        default:
        printf("invalid choice\n");
         break;
     }

        }
    return 0;
}