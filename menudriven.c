#include<stdio.h>

void add(){
    printf("entre two number\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c=a+b;
    printf("sum is %d ",c);

}
void sub(){
    printf("entre two number\n");
    int a,b;
    scanf("%d %d",&a,&b);
    float c=a-b;
    printf("sum is %f ",c);

}
void mul(){
    printf("entre two number\n");
    int a,b;
    scanf("%d %d",&a,&b);
     int c=a*b;
    printf("sum is %d ",c);

}
void div(){
    printf("entre two number\n");
    int a,b;
    scanf("%d %d",&a,&b);
    float c=a/b;
    printf("sum is %f ",c);

}

int main(){

  printf("case 1: addition of two integer\n");
   printf("case 2: Subtraction of two integer\n");
   printf("case 3: multi of two integer\n");
    printf("case 4: divi of two integer\n");
     printf("case 5: exit\n");
     printf("enter your choice\n");
     int choice;
     scanf("%d",&choice);
     switch (choice)
     {
     case 1: add();
         break;
         case 2: sub();
         break;
         case 3: mul();
         break;
         case 4: div();
         break;
        
     
     default:
      printf("invalid choice\n");
         break;
     }





  return 0;
}


