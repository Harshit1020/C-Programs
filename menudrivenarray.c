#include<stdio.h>
// INSRERTION IN ARRAY
void Insertion(){

        int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        int a2[n+1];
        for(int i=0; i<n; i++){

            printf("enter the element:");
            scanf("%i",&a[i]);
        }

        int pos;
        printf("enter the poition you want insert the number:");
        scanf("%i",&pos);
        int newnumber;
        printf("Enter the new element:");
        scanf("%i",&newnumber);

        for(int i=0; i<pos-1; i++){

                    a2[i]=a[i];
        }

        a2[pos-1]= newnumber;

    for(int i=pos-1; i<=n; i++){

        a2[i+1]=a[i];
    }

    printf("here your new inserted num\n");
    for(int i=0; i<=n; i++){

        printf("%i\n",a2[i]);
   
    }

}
// DELETION IN ARRAY
void Deletion(){

        int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        for(int i=0; i<n; i++){

            printf("enter the element:");
            scanf("%i",&a[i]);
        }

        int pos;
        printf("enter the poition you want Delete the number:");
        scanf("%i",&pos);
for(int i=pos-1; i<n; i++){

            a[i]=a[i+1];
}

for(int i=0; i<n-1; i++){

     printf("%i\n",a[i]);

}

}
// SEARCHING IN ARRAY
void Searching(){

        int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        for(int i=0; i<n; i++){

            printf("enter the element:");
            scanf("%i",&a[i]);
        }

    int search;
    printf("enter the number you wanna search:");
    scanf("%i",&search);
    int count=0;
    for(int i=0; i<n; i++){

        if(a[i]==search){

            printf("%i\n",a[i]);
            count++;
        }
    }
    if(count==0){
        printf("not found\n");    
    }
      else{

          printf("found!!\n");

      }  
      
}

void Sorting(){

        int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        for(int i=0; i<n; i++){

            printf("enter the element:");
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
                    printf("now its your sorted array:\n");
                    for(int j=0; j<n; j++){

                        printf("%i\n",a[j]);

                    }
}

void Maximum(){

        int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        for(int i=0; i<n; i++){

            printf("enter the element:");
            scanf("%i",&a[i]);
        }

        int max=0;
        for(int i=0; i<n; i++){

            if(a[i]>a[max]){

                    max=i;

            }
        }

        printf("maximum number is %i\n",a[max]);

}

void Minimum(){

int n;
        printf("entr the size of array:");
        scanf("%i",&n);
        int a[n];
        for(int i=0; i<n; i++){

            printf("enter the element:");
            scanf("%i",&a[i]);
        }

        int min=0;
        for(int i=0; i<n; i++){

            if(a[i]<a[min]){

                    min=i;

            }
        }

        printf("minimum number is %i\n",a[min]);
}
int main(){

printf("-------------------------------------------\n");
printf("-------------------------------------------\n");
printf("************------Array----------**********\n");
printf("-------------------------------------------\n");
printf("-------------------------------------------\n");

int choice=1;
while(choice!=8)
{   
    
printf("1:-Insertion in array!\n");
printf("2:-Deletion in array!\n");
printf("3:-Searching in array!\n");
printf("4:-Sorting in array!\n");
printf("5:-Maximum numner in array!\n");
printf("6:-Minimum number in array!\n");
printf("7:-Duplicate number  in array!\n");
printf("8:-Exit?\n");
printf("Please enter your choice:\n");
scanf("%i",&choice);
switch(choice)
{
case 1:Insertion();
    break;
case 2:Deletion();
    break;
case 3:Searching();
    break;
case 4:Sorting();
    break;
case 5:Maximum();
    break;
case 6:Minimum();
    break;
/*case 7:Duplicate();
        break;*/  
default:
    printf("Invalide Choice");
    break;
}
}
    return 0; 
}