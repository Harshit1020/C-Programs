//  
#include<stdio.h>

int subset_sum(int[],int,int);
int val[100],mem[101][101];
int main()
{
   int n;
   int sum;
   int i;
   int result;
   printf("enter the number of items and required");
   scanf("%d%d",&n,&sum);
    printf("ENTER THE VALUES ASSOCIATED WITH EACH ELEMENT:");
   for(i =0; i<n; i++)
    {
        scanf("%d",&val[i]);
    }

    result = subset_sum(val,n,sum);

     return 0;

}