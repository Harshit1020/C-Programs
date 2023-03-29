//pointers and addresing
#include<stdio.h>


int main(){

     int a=12;
     int *add=&a;
     int **two=&add;
     int ***third=&two;

     printf("%i\n",third);
     printf("%i\n",***third);
     

    
     return 0;
}


/*#include<stdio.h>

int main(){
int i=0,n,temp=0;
	printf("Please give input a number: ");
	scanf("%i",&n);
	for(i=2;i<=(n/2);i++){
		if(n%i==0)
		{
		temp=1;
		break;
		}
	}
	if(temp==1)
		printf("given number is not a prime number");
	else
		printf("given number is a prime number");

 return 0;
	} */