/*#include<stdio.h>

int main()

{
    int age;
    int b;
    printf("enter your age:");
    scanf("%i",&age);
    printf("my is is %i",age);
    return 0;
}*/


#include<stdio.h>

int main()
{
    int first=0;
    int second=1;
    int temp=0;
    printf("%i\n",first);
    for(int i=1; i<12; i++);
    {
          temp=first+second;
          first=second;
         second=temp;
          printf("%i\n",temp);
        
    }
     return 0;

}